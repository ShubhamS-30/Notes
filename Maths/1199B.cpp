#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    double h,l,ans;
    cin>>h>>l;
    ans =(l*l - h*h);
    ans = ans/(2*h);
    cout<<fixed<<setprecision(8)<<ans<<endl;
    return 0;
}