#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int w,h;
        cin>>w>>h;
        long long int k1,k2,k,n;
        long long int mxw,mxh;
        mxw = mxh =INT64_MIN;
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>k;
            if(i == 0)
            {
                k1 = k;
            }
            else if(i == n-1)
            k2 = k;
        }
        mxw = max(mxw,abs(k2 - k1));
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>k;
            if(i == 0)
            {
                k1 = k;
            }
            else if(i == n-1)
            k2 = k;
        }
        mxw = max(mxw,abs(k2 - k1));
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>k;
            if(i == 0)
            {
                k1 = k;
            }
            else if(i == n-1)
            k2 = k;
        }
        mxh = max(mxh,abs(k2-k1));
        cin>>n;
        for(int i = 0;i<n;i++)
        {
            cin>>k;
            if(i == 0)
            {
                k1 = k;
            }
            else if(i == n-1)
            k2 = k;
        }
        mxh = max(mxh,abs(k2-k1));
        cout<<max(mxh*w,mxw*h)<<endl;
    }
    return 0;
}