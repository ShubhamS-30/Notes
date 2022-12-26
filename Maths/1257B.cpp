#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,y;
        cin>>x>>y;
        if(x >= y)
        cout<<"YES"<<endl;
        else if(x%2==0 and x*1.5 == y)
        cout<<"YES"<<endl;
        else if(x - y == 1)
        cout<<"YES"<<endl;
        else if(x == 1 or x == 2 or x == 3)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}