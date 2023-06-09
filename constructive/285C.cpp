#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    vector<ll> v(n,0);
    for(int i = 0;i<n;i++)
    cin>>v[i];
    ll ans  = 0;
    sort(v.begin(),v.end());
    for(int i = 0;i<n;i++)
    ans += abs(v[i] - (i+1));
    cout<<ans<<endl;
    return 0;
}