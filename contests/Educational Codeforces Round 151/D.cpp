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
        vector<ll> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        ll k = 0;
        int neg = 0;
        ll rating = 0;
        for(auto x:v)
        {
            rating+=x;
            if(x<0)
            neg = 1;
            if(neg == 0)
            k = max(k,rating);
        }
        cout<<k<<endl;
    }
    return 0;
}