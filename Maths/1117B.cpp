#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,m,k,t;
    cin>>n>>m>>k;
    vector<ll> v;
    for(ll i = 0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    sort(v.begin(),v.end(),greater<ll>());
    ll smt,mt;
    smt = m/(k+1);
    mt = m - smt;
    cout<<mt*v[0]+smt*v[1]<<endl;
    return 0;
}