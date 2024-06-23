#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll x,k,n,m;
        cin>>n>>k>>x;
        if(x!=1)
        {
            
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i = 1;i<=n;i++)
            cout<<1<<" ";
            cout<<endl;
        }
        else if(k==1 and x == 1)
        {
            cout<<"NO"<<endl;
        }
        else if(k == 2 and x == 1 and n%2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
           if(k == n)
           {
                cout<<"YES"<<endl;
                cout<<1<<endl;
                cout<<n<<endl;
           }
           else
           {
               if(n%2 == 0)
               {
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i = 0;i<n/2;i++)
                    cout<<2<<" ";
                    cout<<endl;
               }
               else if(n%3 == 0)
               {
                    cout<<"YES"<<endl;
                    cout<<n/3<<endl;
                    for(int i = 0;i<n/3;i++)
                    cout<<3<<" ";
                    cout<<endl;
               }
               else if(n%3 == 1)
               {
                    int t = n/3;
                    if(t <= 1)
                        cout<<"NO"<<endl;
                    else
                    {
                        cout<<"YES"<<endl;
                        cout<<t+1<<endl;
                        for(int i = 0;i<t-1;i++)
                        {
                            cout<<3<<" ";
                        }
                        cout<<2<<" "<<2<<endl;
                    }
               }
               else if(n%3 == 2)
               {
                    int t = n/3;
                    if(t <= 0)
                        cout<<"NO"<<endl;
                    else
                    {
                        cout<<"YES"<<endl;
                        cout<<t+1<<endl;
                        for(int i = 0;i<t;i++)
                        {
                            cout<<3<<" ";
                        }
                        cout<<2<<endl;
                    }
               }
           }
        }
    }
    return 0;
}