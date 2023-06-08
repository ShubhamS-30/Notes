#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    long long int k = 0;
    ll a,n,b,r;
    cin>>a>>b>>n;
    for(int i = 0;i<=9;i++)
    {
        if((a*10+i)%b==0)
        {
            a = a*10+i;
            break;
        }
        else if(i == 9)
        a = -1;
    }
    if(a==-1)
    cout<<-1<<endl;
    else
    {
        string ans = to_string(a);
        for(int i = 0;i<n-1;i++)
        ans.push_back('0');
        cout<<ans<<endl;
    }
    
    return 0;
}