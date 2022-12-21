#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n,m,k;
    cin>>m>>n;
    vector<vector<int>> v(m,vector<int> (n,1));
    vector<vector<int>> v1(m,vector<int> (n,1));
    vector<vector<int>> v2(m,vector<int> (n,1));
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            cin>>k;
            v[i][j] = k;
        }
    }
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        {
            if(v[i][j]==0)
            {
                for(int x = 0;x<m;x++)
                v1[x][j] = 0;
                for(int x = 0;x<n;x++)
                v1[i][x] = 0;
            }
        }
    }
    vector<int> r;
    vector<int> col;
    for(int i = 0;i<m;i++)
    {
        k = 0;
        for(int j = 0;j<n;j++)
        k = k|v1[i][j];
        col.push_back(k);
    }
    for(int i = 0;i<n;i++)
    {
        k = 0;
        for(int j = 0;j<m;j++)
        k = k|v1[j][i];
        r.push_back(k);
    }
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            v2[j][i] = r[i]|col[j];
            if(v2[j][i]!=v[j][i])
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
    for(int i = 0;i<m;i++)
    {
        for(int j = 0;j<n;j++)
        cout<<v1[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}