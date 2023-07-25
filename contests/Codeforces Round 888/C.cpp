#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<ll> v(n,0);
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
        }
        int ft,lt;
        ft = v[0];
        lt = v[n-1];
        ll ftc,ltc;
        ftc = ltc = 0;
        if(ft == lt)
        {
            for(auto x:v)
            {
                if(x == ft)
                ftc++;
            }
            if(ftc>=k)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
        else
        {
            for(auto x:v)
            {
                if(x == ft)
                {
                    ftc++;
                }
                else if(x == lt)
                {
                    if(ftc>=k)
                    ltc++;
                }
            }
            if(ltc<k)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
    return 0;
}