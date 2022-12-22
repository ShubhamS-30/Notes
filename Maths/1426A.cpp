#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,floor;
        cin>>n>>x;
        floor = 0;
        n = n - 2;
        if(n%x and n>0)
        {
            floor = n/x + 2;
        }
        else if(n>0)
        floor = n/x+1;
        else
        floor = 1;
        cout<<floor<<endl;
    }
    return 0;
}