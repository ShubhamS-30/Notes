#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll sum1,sum2,n;
    cin>>n;
    sum1 = sum2 = 0;
    vector<ll> s1,s2;
    for(int i = 1;i<=n;i+=2)
    {
        sum1+=i;
        s1.push_back(i);
    }
    
    for(int i = 2;i<=n;i+=2)
    {
        sum2+=i;
        s2.push_back(i);
    }
    
    if(s1.size()>0 and s2.size()>0 and __gcd(sum1,sum2)!=1)
    {
        cout<<"Yes"<<endl;
        cout<<s1.size()<<" ";
        for(auto x:s1)
        cout<<x<<" ";
        cout<<endl;
        cout<<s2.size()<<" ";
        for(auto x:s2)
        cout<<x<<" ";
        cout<<endl;
    }
    else
    cout<<"No"<<endl;
    return 0;
}