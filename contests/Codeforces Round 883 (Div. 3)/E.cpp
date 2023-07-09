#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll sum(ll r,ll n)
{
    return (pow(r,n) - 1)/(r - 1);
}
bool possible(ll n)
{
    if(n<=3)
    return false;
    ll gp  = 0;
    for(int i = 2;i<=1000;i++)
    {
        if(sum(i,2)>=n)
        break;
        for(int j = 3;j<=32;j++)
        {
            gp = sum(i,j);
            if(gp == n)
            return true;
            else if(gp>n)
            break;
        }
    }
    return false;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(possible(n))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}