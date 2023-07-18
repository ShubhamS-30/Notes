#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first!=b.first)
    return a.first<b.first;
    else
    return a.second>b.second;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> a(n,0);
        vector<ll> b(n,0);
        vector<pair<ll,ll>> v;
        unordered_map<int,int> m;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i]>>b[i];
            v.push_back({a[i],b[i]});
            
        }
        sort(v.begin(),v.end(),comp);
        int x = 0;
        ll ans = 0;
        int x1 = 0;
        ll sub;
        
        for(int i = 0;i<n;i++)
        {
            // cout<<"   id = "<<i<<" "<<x<<" "<<x1<<"  "<<ans<<endl;
            if(x1<v[i].first)
            {
                x++;
                x1 = max(x1,x);
                ans+=v[i].second;
                // cout<<"IN id = "<<i<<" "<<x<<" "<<x1<<"  "<<ans<<" "<<v[i].first<<endl;
                m[v[i].first]++;
                sub =  m[x];
                m[x] = 0;
                x-=sub;
                // cout<<"IN id = "<<i<<" "<<x<<" "<<x1<<"  "<<ans<<" "<<v[i].first<<endl;
            }
            //  cout<<"OUT id = "<<i<<" "<<x<<" "<<x1<<"  "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}
// 1
// 5
// 3 4
// 3 1
// 2 5
// 3 2
// 3 3