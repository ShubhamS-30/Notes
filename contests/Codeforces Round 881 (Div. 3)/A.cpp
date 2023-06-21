#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        ll ans = 0;
        for(int i = 0;i<n/2;i++)
        {
            ans += abs(v[i] - v[n - i - 1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}