#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll lcm(ll a,ll b)
{
    return (a*b)/(__gcd(a,b));
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        int ans = 0;
        if(v[0]>n)
        ans = 0;
        else
        {
            ans = 1;
            ll lc = v[0];
            ll k;
            for(int i = 1;i<n;i++)
            {
                k = lcm(lc,v[i]);
                if(k<=n)
                {
                    lc = k;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}