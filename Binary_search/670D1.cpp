#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll def(vector<ll> &a,vector<ll> &b,ll x)
{
    ll diff = 0;
    for(ll i = 0;i<a.size();i++)
    {
        if(x*a[i]>b[i])
        diff+=(x*a[i]-b[i]);
    }
    return diff;
}
ll BS(ll k,ll l,ll r,vector<ll> &a,vector<ll> &b)
{
    if(l>r)
    return r;
    else
    {
        ll mid = (l+r)/2;
        ll dif = def(a,b,mid);
        // cout<<l<<" "<<r<<" "<<mid<<" "<<dif<<endl;
        if(dif == k)
        return mid;
        else if(dif>k)
        return BS(k,l,mid-1,a,b);
        else
        return BS(k,mid+1,r,a,b);
    }
}
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n,0);
    vector<ll> b(n,0);
    for(ll i = 0;i<n;i++)
    cin>>a[i];
    for(ll i = 0;i<n;i++)
    cin>>b[i];
    ll ans = BS(k,0,1000000000,a,b);
    cout<<ans<<endl;
    return 0;
}