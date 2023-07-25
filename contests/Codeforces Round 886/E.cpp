#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        unsigned ll n,c;
        cin>>n>>c;
        vector<ll> v(n,0);
        ll sum_sq,sum;
        sum = sum_sq = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
            sum_sq += v[i]*v[i];
        }
        // ll k1 = 4*sum;
        // ll a = pow(k1,2);
        // ll b = 4*(4*n)*(sum_sq - c);
        // ll det = sqrt(a - b);
        // ll w = (-4*sum + det)/(8*n);
        
        ll a = 4*n;
        ll b = 4*sum;
        ll c1 = sum_sq - c;
        ll x = __gcd(b,a);
        ll common = __gcd(abs(c1),x);
        a = a/common;
        b = b/common;
        c1 = c1/common;
        ll sq = b*b;
        ll ac = 4*a*c1;
        ll den = 2*a;
        cout<<sq<<" "<<ac<<endl;
        ll det = sqrt(sq - ac)/den;
        cout<<sum<<" "<<sum_sq<<" "<<a<<" "<<b<<" "<<det<<" "<<common<<endl;
        ll f = -b/(den);
        ll w1 = (f + det);
        // ll w2 = (-b - det)/(2*a);
        cout<<"Ans = "<<w1<<endl;
    }
    return 0;
}