#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,k,ans;
    ans = 0;
    cin>>n;
    vector<ll> v;
    for(int i = 0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
    }
    for(int i = n-1;i>=0;i--)
    {
        if(i == n-1)
        {
            k = v[i];
            
        }
        else
        {
            k = min(max(0,int(k-1)),int(v[i]));
        }
        ans+=k;
    }
    cout<<ans<<endl;
    return 0;
}