#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if((n/2)%2)
        cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            ll k =2;
            ll sum = 0;
            for(int i = 0;i<n/2;i++)
            {
                cout<<k<<" ";
                k+=2;
                sum+=k;
            }
            k = 1;
            for(int i = 0;i<n/2;i++)
            {
                if(i<n/2-1)
                {
                    cout<<k<<" ";
                    k+=2;
                    sum-=k;
                }
                else
                cout<<sum-2<<endl;
                
            }
            // cout<<endl;
        }
    }
    return 0;
}