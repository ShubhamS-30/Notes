#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,count;
    cin>>n;
    count = 0;
    while(n>0)
    {
        if(n%10==4 or n%10==7)
        count++;
        n = n/10;
    }
    if(count == 4 or count == 7)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}