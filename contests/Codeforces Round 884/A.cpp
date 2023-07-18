#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a,b,n;
        cin>>a>>b;
        if(a>1)
        {
            cout<<a-1<<endl;
        }
        else if(a == 1 and b == 2)
        {
            cout<<b+1<<endl;
        }
        else
        cout<<2<<endl;
    }
    return 0;
}