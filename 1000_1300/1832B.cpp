#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        ll ans = 0;
        ll ptr = 0;
        ll minsum;
        ll minr,maxr;
        minr = maxr = 0;
        vector<ll> l(n,0);
        vector<int> r(n,0);
        l[0] = v[0];
        for(int i = 1;i<n;i++)
        l[i] = l[i-1]+v[i];
        minr = l[2*k-1];
        ll rem = minr;
        int id = 2*k - 1;
        for(int i = 0;i<k;i++)
        {
            // cout<<minr<<" "<<maxr<<" "<<i<<endl;
            id -=2;
            if(id>=0)
            minr = l[id];
            else
            minr = 0;
            maxr += v[v.size()-i-1];
            rem = min(rem,minr+maxr);
        }
        ans  = l.back() - rem;
        cout<<ans<<endl;
    }
    return 0;
}