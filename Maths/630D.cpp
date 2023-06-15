#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll ans,n;
    cin>>n;
    ans = n*(12+(n-1)*6)/2 + 1;
    cout<<ans<<endl;
    return 0;
}