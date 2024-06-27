#include<bits/stdc++.h>
using namespace std;
void solve(long long x,long long y,long long k)
{
    if(y == 1 or x == 0 or k == 0)
    {
        cout<<x<<endl;
        return;
    }
    long long t;
    while(k>0 and x>1)
    {
        t = y - x%y;
        // if(y > x)
        //     t = (y - x);
       //cout<<x<<" "<<y<<" "<<k<<" "<<t<<endl; 
        if(t)
        {
            x += min(k,t);
            k -= min(k,t);
        }
        //cout<<x<<" "<<y<<" "<<k<<" "<<t<<endl; 
        while(x%y==0)
        {
            x = x/y;
           //cout<<"x = "<<x<<endl;
            //k--;
        }
    }
    if(k == 0)
    cout<<x<<endl;
    else
    {
        t = y - x%y;
        //cout<<x<<" "<<y<<" "<<k<<" "<<t<<endl; 
        cout<<x + k%t<<endl;
    }
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long x,y,k;
        cin>>x>>y>>k;
        solve(x,y,k);
    }
    return 0;
}