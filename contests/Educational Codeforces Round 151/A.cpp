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
        else
        {
            int mul,rem;
            mul = rem = -1;
            for(int i = 1;i<=k;i++)
            {
                if(i!=x and n%i!=x)
                {
                    mul = i;
                    m = n/i;
                    rem = n % i;
                    break;
                }
            }
            if(rem>0)
            m++;
            if(mul == -1)
            cout<<"NO"<<endl;
            else
            {
                
                cout<<"YES"<<endl;
                cout<<m<<endl;
                while(n>=mul)
                {
                    cout<<mul<<" ";
                    n-=mul;
                }
                if(rem>0)
                cout<<rem<<endl;
                else
                cout<<endl;
            }
        }
    }
    return 0;
}