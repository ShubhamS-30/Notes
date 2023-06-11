#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll x,y,n;
    cin>>x>>y>>n;
    ll mod = pow(10,9)+7;
    vector<ll> v(6,0);
    n--;
    v[0] = x;
    v[1] = y;
    v[2] = y - x;
    v[3] = -x;
    v[4] = -y;
    v[5] = x-y;
    n = n%6;
    cout << (v[n] % mod + mod) % mod;
    return 0;
}