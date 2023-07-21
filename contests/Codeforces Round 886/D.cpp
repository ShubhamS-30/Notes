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
        int ans = 1;
        int len = 1;
        for(int i = 1;i<n;i++)
        {
            if(v[i] - v[i-1]<=k)
            len++;
            else
            {
                ans = max(len,ans);
                len = 1;
            }
        }
        ans = max(len,ans);
        cout<<n - ans<<endl;
    }
    return 0;
}