#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll nb,ns,nc,pb,ps,pc,b,s,c,r;
ll fun(ll x)
{
    ll a1,b1,c1;
    a1 = max((long long )0,b*x-nb)*pb;
    b1 = max((long long )0,c*x-nc)*pc;
    c1 = max((long long )0,s*x-ns)*ps;
    // cout<<x<<" "<<a+b+c<<endl;
    return a1+b1+c1;
}
ll BS(ll mn,ll mx,ll r)
{
    ll x = (mn+mx)/2;
    ll mon = fun(x);
    // cout<<mn<<" "<<mx<<" "<<x<<" "<<mon<<endl;
    if(mn>mx)
    return mx;
    else if(mon == r)
    return x;
    else if(mon<r)
    return BS(x+1,mx,r);
    else
    return BS(mn,x-1,r);
}
int main()
{
    string st;
    cin>>st;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;
    b = s = c = 0;
    for(auto x:st)
    {
        if(x == 'B')
        b++;
        else if(x == 'S')
        s++;
        else
        c++;
    }
    ll cost1 = b*pb+s*ps+c*pc;
    // cout<<"cost = "<<cost1<<endl;
    ll ans = 0;
    ll x = BS(0,1e14,r);
    cout<<x<<endl;
    return 0;
}