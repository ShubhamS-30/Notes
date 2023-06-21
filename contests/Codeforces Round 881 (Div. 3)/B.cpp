#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        ll sum,op,fl;
        sum = op = fl = 0;
        for(int i = 0;i<n;i++)
        {
            if(v[i]<0 and fl == 0)
            {
                fl = 1;
            }
            else if(v[i]>0 and fl == 1)
            {
                fl = 0;
                op++;
            }
            sum+=abs(v[i]);
        }
        if(fl == 1)
        op++;
        cout<<sum<<" "<<op<<endl;
    }
}