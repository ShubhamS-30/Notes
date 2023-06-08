#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll x,y,z,sumx,sumy,sumz,n;
    x = y = z = sumx = sumy = sumz = 0;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        cin>>x>>y>>z;
        sumx+=x;
        sumy+=y;
        sumz+=z;
    }
    if(sumx == sumy and sumy == sumz and sumz == 0)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}