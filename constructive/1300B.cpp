#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        vector<ll> v;
        cin>>n;
        for(int i = 0;i<2*n ;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        sort(v.begin(),v.end());
        cout<<v[n]-v[n-1]<<endl;
    }
    return 0;
}