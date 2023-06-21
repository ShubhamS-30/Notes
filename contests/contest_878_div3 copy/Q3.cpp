#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,k,q;
        cin>>n>>k>>q;
        vector<long long int> temp(n,0);
        for(int i = 0;i<n;i++)
        cin>>temp[i];
        int fl,st;
        fl = st = 0;
        ll ans = 0;
        for(int i = 0;i<n;i++)
        {
            if(temp[i]<=q)
            {
                if(fl == 1)
                st++;
                else
                {
                    st = 1;
                    fl = 1;
                }
            }
            else if(fl == 1 and temp[i]>q)
            {
                fl = 0;
                if(st>=k)
                ans += (st -k + 1)*(st - k + 2)/2;
                st = 0;
            }
        }
        if(st>=k)
        ans += (st -k + 1)*(st - k + 2)/2;
        cout<<ans<<endl;
    }
    return 0;
}