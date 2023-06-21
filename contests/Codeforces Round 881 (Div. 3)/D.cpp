#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
unordered_map<int,int> t;
unordered_map<int,int> vis1;
unordered_map<int,int> m1,m2,vis2;
void correct(vector<unordered_map<int,int>> &adj,unordered_map<int,int> &visit,int cur)
{
    visit[cur] = 1;
    for(auto x:adj[cur])
    {
        if(visit[x.first] == 0)
        {
            visit[x.first] = 1;
            adj[x.first].erase(cur);
            correct(adj,visit,x.first);
        }
    }
}
unordered_map<int,int> endp(int cur,vector<unordered_map<int,int>> &adj, vector<unordered_map<int,int>> &dp,unordered_map<int,int> &visit)
{
    // cout<<"cur = "<<cur<<endl;
    visit[cur] = 1;
    unordered_map<int,int> ans;
    if(adj[cur].size() == 0)
    {
        ans[cur] = 1;
        dp[cur] = ans;
        return ans;
    }
    else if(dp[cur].size() > 0)
    return dp[cur];
    else
    {
        
        for(auto x:adj[cur])
        {
            if(visit[x.first] == 0)
            {
                visit[x.first] = 1;
                t.clear();
                t = endp(x.first,adj,dp,visit);
                for(auto y:t)
                {
                    ans[y.first] = 1;
                }
            }
        }
        t.clear();
        dp[cur] = ans;
        return ans;
    }
}
int main()
{
    int t1;
    cin>>t1;
    while(t1--)
    {
        int n;
        cin>>n;
        int q,vi,u;
        vector<unordered_map<int,int>> adj(n+1);
        for(int i = 0;i<n-1;i++)
        {
            cin>>u>>vi;
            // u--;
            // vi--;
            adj[u][vi] = 1;
            adj[vi][u] = 1;
        }
        // cout<<"adj"<<endl;
        // for(int i = 1;i<adj.size();i++)
        // {
        //     cout<<i<<" -> ";
        //     for(auto x:adj[i])
        //     cout<<x.first<<" ";
        //     cout<<endl;
        // }
       
        correct(adj,vis1,1);
        vis1.clear();
        //  cout<<"adj"<<endl;
        // for(int i = 1;i<adj.size();i++)
        // {
        //     cout<<i<<" -> ";
        //     for(auto x:adj[i])
        //     cout<<x.first<<" ";
        //     cout<<endl;
        // }
        cin>>q;
        vector<unordered_map<int,int>> dp(n+1);
        
        int f,g;
        for(int i = 0;i<q;i++)
        {
            cin>>u>>vi;
            // u--;
            // vi--;
            if(dp[u].size() == 0)
            {
                m1 = endp(u,adj,dp,vis1);
            }
            if(dp[vi].size() == 0)
            m2 = endp(vi,adj,dp,vis2);
            f = dp[u].size();
            g = dp[vi].size();
            cout<<f*g<<endl;
            m1.clear();
            m2.clear();
            vis1.clear();
            vis2.clear();
        }
        // cout<<"DP"<<endl;
        // for(int i = 1;i<=n;i++)
        // {
        //     cout<<i<<" -> ";
        //     for(auto x:dp[i])
        //     cout<<x.first<<" ";
        //     cout<<endl;
        // }
    }
    return 0;
}
// 1
// 5
// 1 2
// 3 4
// 5 3
// 3 2
// 1
// 3 4