#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll l,r;
        cin>>l>>r;
        if(2*l>r)
        cout<<-1<<" "<<-1<<endl;
        else
        cout<<l<<" "<<2*l<<endl;
    }
    return 0;
}