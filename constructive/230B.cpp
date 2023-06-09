#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool prime(int x)
{
    for(int i = 2;i<=sqrt(x);i++)
    {
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    for(int i = 0;i<n;i++)
    {
        ll x,sq;
        cin>>x;
        sq = sqrt(x);
        if(x != 1 and sq*sq == x and prime(sq))
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}