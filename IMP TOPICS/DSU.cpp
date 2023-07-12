#include<bits/stdc++.h>
using namespace std;
class DSU{
    vector<int> size,parent;
    public:
    DSU(int n)
    {
        size.resize(n+1,0);
        parent.resize(n+1);
        for(int i = 0;i<=n;i++)
        parent[i] = i;
    }
    int find_parent(int node)
    {
        if(node == parent[node])
        return node;
        return parent[node] = find_parent(parent[node]);
    }
    void union_size(int u,int v)
    {
        int pu = find_parent(u);
        int pv = find_parent(v);
        if(pu == pv)
        return ;
        else if(size[pu]<size[pv])
        {
            size[pv]+=size[pu];
            parent[pu] = pv;
        }
        else
        {
            size[pu]+=size[pv];
            parent[pv] = pu;
        }
    }
};
int main()
{
    return 0;
}