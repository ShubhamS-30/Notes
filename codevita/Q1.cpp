#include<bits/stdc++.h>
using namespace std;
int dks(int src,int dest,vector<vector<int>> &adj)
{
    if(src == dest)
    return 0;

    priority_queue<pair<int,int>> pq;
    vector<int> visit(adj.size(),1e9);

    pq.push({0,src});
    int cur,cost;
    while(!pq.empty())
    {
        cost = -1*pq.top().first;
        cur = pq.top().second;

        pq.pop();

        if(cost >= visit[cur])
        continue;

        visit[cur] = cost;
        int sz = adj[cur].size();
        for(int i = 0;i<sz;i++)
        {
            pq.push({-1*(cost+1),adj[cur][i]});
        }
    }
    return visit[dest] == 1e9 ? -1 : visit[dest];
}
vector<int> brk(string &s,int x)
{
    vector<int> ans;
    string t = "";
    int k;
    int sz = s.length();
    for(int i = 0;i<sz;i++)
    {
        if(s[i]!=' ')
        t.push_back(s[i]);
        else
        {
            k = stoi(t);
            t = "";
            if(x != k-1)
            ans.push_back(k-1);
        }
    }
    if(t.size()>0)
    {
        k = stoi(t);
        t = "";
        if(x!=k-1)
        ans.push_back(k-1);
    }
    return ans;
}
int main()
{
    int n,l,k;
    cin>>n;
    vector<vector<int>> adj(n);
    cin>>ws;
    vector<string> x;
    for(int i = 0;i<n;i++)
    {
    //    cout<<"ABC = "<<i<<endl;
        string pages;
        getline(cin,pages);
        x.push_back(pages);
    }
    for(int i = 0;i<n;i++)
    {
        adj[i] = brk(x[i],i);
    }
    // for(int i = 0;i<n;i++)
    // {
    //     cout<<"page "<<i<<" ";
    //     for(int j= 0 ;j<adj[i].size();j++)
    //     cout<<adj[i][j]<<" ";
    //     cout<<endl;
    // }
    int src,dest;
    cin>>src>>dest;
    int ans = dks(src-1,dest-1,adj);
    cout<<ans<<endl;
    return 0;
}