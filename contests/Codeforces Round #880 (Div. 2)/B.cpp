#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,g,s,h,und,ans,upp,pay,r;
        cin>>n>>k>>g;
        s = k*g;
        h = g/2 + g%2;
        if(s>=n and h>1)
        {
        und = min((h-1)*(n-1),s);
        upp = s - und;
        pay = 0;
        r = upp%g;
        if(r>=h)
        pay += (upp)+(g-r);
        else
        pay+= upp - r;
        ans = s - pay;
        }
        else if(h == 1)
        {
            upp = s;
            pay = 0;
            r = upp%g;
            if(r>=h)
              pay += (upp)+(g-r);
            else
              pay+= upp - r;
            ans = s - pay;
        }
        else 
        {
            ans = s;
        }
        cout<<ans<<endl;


    }
    return 0;
}