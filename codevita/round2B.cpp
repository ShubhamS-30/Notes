#include<bits/stdc++.h>
using namespace std;
int rec(int x,int y,int dx,int dy,vector<vector<int>> &v,vector<vector<int>> &dp)
{
    if(x<0 or y<0 or x == int(v.size()) or y == int(v[0].size()))
        return 1e9;
    else if(x == dx and y == dy)
        return v[dx][dy];
    else if(dp[x][y]!=-1)
        return dp[x][y];
    else if(x>dx or y>dy)
        return 1e9;
    else
    {
        int ans = 0;
        
        ans = v[x][y] + min(rec(x+1,y,dx,dy,v,dp),rec(x,y+1,dx,dy,v,dp));
        
        return dp[x][y] = ans;
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m,0));
    vector<vector<int>> dp(n,vector<int> (m,-1));
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
        cin>>v[i][j];
        }
    }
    int x,y,dx,dy;
    cin>>x>>y>>dx>>dy;
    x--;
    y--;
    dx--;
    dy--;
    
   
    if(x > dx or y > dy)
    cout<<-1<<endl;
    else
    {
        int ans = rec(x,y,dx,dy,v,dp);
        cout<<ans<<endl;
    }
   
    return 0;
}