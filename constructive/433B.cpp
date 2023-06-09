#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,sum;
    sum = 0;
    cin>>n;
    vector<ll> v(n,0);
    for(int i = 0;i<n;i++)
    cin>>v[i];
    vector<ll> pre(n,0);
    vector<ll> pre1(n,0);
    vector<ll> v1 = v;
    sort(v1.begin(),v1.end());
    pre[0] = v[0];
    pre1[0] = v1[0];
    for(int i = 1;i<n;i++)
    pre[i] = pre[i-1]+v[i];
    for(int i = 1;i<n;i++)
    pre1[i] = pre1[i-1]+v1[i];
    int m,ty,l,r;
    cin>>m;
    for(int i = 0;i<m;i++)
    {
        cin>>ty>>l>>r;
        l--;
        r--;
        sum = 0;
        if(ty == 1)
        {
            if(l == 0)
            sum -= 0;
            else
            sum -= pre[l-1];
            if(r == n-1)
            sum+= pre[r];
            else
            sum+=pre[r];

        }
        else
        {
            if(l == 0)
            sum -= 0;
            else
            sum -= pre1[l-1];
            if(r == n-1)
            sum+= pre1[r];
            else
            sum+=pre1[r];

        }
        cout<<sum<<endl;
    }
    

    return 0;
}