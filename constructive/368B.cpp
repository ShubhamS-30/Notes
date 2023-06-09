#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n,m,l;
    cin>>n>>m;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++)
    cin>>v[i];
    unordered_map<int,int> mp;
    vector<int> ans(n,0);
    for(int i = n-1;i>=0;i--)
    {
        mp[v[i]]++;
        ans[i] = mp.size();
    }
    for(int i = 0;i<m;i++)
    {
        cin>>l;
        cout<<ans[l-1]<<endl;
    }
    return 0;
}