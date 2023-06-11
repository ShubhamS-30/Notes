#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll eq(unordered_map<ll,ll> & m,ll d)
{
    ll ans = INT_MAX;
    ll piv,op;
    for(auto x:m)
    {
        piv = x.first;
        op = 0;
        for(auto y:m)
        {
            if(y.first!=piv and abs(y.first-x.first)%d == 0)
            {
                op += (abs(y.first-x.first)/d) * y.second;
            }
            else if(abs(y.first-x.first)%d != 0)
            return -1;
        }
        ans = min(ans,op);
    }
    return ans;
}
int main()
{
    ll n,m,d;
    cin>>n>>m>>d;
    vector<ll> v(n*m,0);
    for(int i = 0;i<n*m;i++)
    cin>>v[i];
    unordered_map<ll,ll> mp;
    for(auto x:v)
    mp[x]++;
    ll ans = eq(mp,d);
    cout<<ans<<endl;
    return 0;
}