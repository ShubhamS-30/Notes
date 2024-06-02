#include<bits/stdc++.h>
using namespace std;
int n,m;
bool obs(int col,vector<vector<int>> &mat)
{
    for(int i = n-1;i>=0;i--)
    {
        if(mat[i][col]==-1)
        return true;
    }
    return false;
}
pair<int,int> hurdle(int col,vector<vector<int>> &mat)
{
    int l,h;
    l = h = -1;
    for(int i = n-1;i>=0;i--)
    {
        if(mat[i][col] != -1)
        {
            if(l == -1)
            l = i;
            else
            h = i;
        }
    }
    return {l,h};
}
pair<int,int> get_coin(int col,int h1,int h2,vector<vector<int>> &mat)
{
    int ans = h1;
    int coins = 0;
    for(int i = h1;i>=h2;i--)
    {
        if(mat[i][col] == 1)
        {
            coins++;
            ans = i;
        }
    }
    return {ans,coins};
}
int main()
{
    cin>>n>>m;
    vector<vector<int>> mat(n,vector<int> (m,-1));
    char c;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>c;

            if(c == 'C')
            mat[i][j] = 1;
            else if(c == '0')
            mat[i][j] = 0;
        }
    }
    // for(int i = 0;i<n;i++)
    // {
    //     for(int j = 0;j<m;j++)
    //     {
    //         cout<<mat[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    int cal,sc,h1,h2,coin;
    cal = sc = 0;
    pair<int,int> t;

    for(int i = 0;i<m;i++)
    {
        if(obs(i,mat))
        {
            t = hurdle(i,mat);
            h1 = t.first;
            h2 = t.second;
            t = get_coin(i,h1,h2,mat);
            h1 = t.first;
            coin = t.second;
            cal += 2*(n - h1 - 1);
            sc += coin;
        }
        else
        {
            t = get_coin(i,n-1,0,mat);
            h1 = t.first;
            coin = t.second;
            cal += 2*(n - h1 - 1);
            sc += coin;
        }
    }
    cout<<sc<<" "<<cal<<endl;
    return 0;
}