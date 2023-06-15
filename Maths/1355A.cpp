#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
vector<ll> dig(ll n)
{
    ll mn,mx;
    mx = 0;
    mn = 9;
    while(n>0)
    {
        mx = max(mx,n%(long long)10);
        mn = min(mn,n%(long long)10);
        n = n / 10;
    }
    return {mx,mn};
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {

    
    ll a,k;
    cin>>a>>k;
    vector<ll> v;
    for(ll i = 1;i<k;i++)
    {
        v = dig(a);
        if(v[1] == 0)
        break;
        else
        a += v[0]*v[1];
    }
    cout<<a<<endl;
    }
    return 0;
}