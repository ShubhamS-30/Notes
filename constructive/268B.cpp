#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    ll ans = 0;
    for(int i = n;i>=1;i--)
    {
        ans = ans + i + (i-1)*(n-i);
    }
    cout<<ans<<endl;
    return 0;
}