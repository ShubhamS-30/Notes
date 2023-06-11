#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<ll> v(26,0);
    for(auto x:s)
    v[x - 'A']++;
    sort(v.begin(),v.end(),greater<ll>());
    ll ans = 0;
    int id = 0;
    while(id<26 and k>0)
    {
        ans += min(v[id],k)*min(v[id],k);
        k -= min(v[id],k);
        id++;
    }
    cout<<ans<<endl;
    return 0;
}