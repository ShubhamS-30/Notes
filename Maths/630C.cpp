#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    vector<ll> v(55,0);
    v[0] = 2;
    vector<ll> pre(55,0);
    int n;
    cin>>n;
    pre[0] = 2;
    for(int i = 1;i<n;i++)
    {
        v[i] = v[i-1]*2;
        pre[i] += pre[i-1] + v[i];
    }
    cout<<pre[n-1]<<endl;
    return 0;
}