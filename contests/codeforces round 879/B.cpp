#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string l,r;
        cin>>l>>r;
        int ans = 0;
        while(l.length()<r.length())
        l = '0'+l;
        // cout<<l<<" "<<r<<endl;
        int ptr = 0;
        // while(ptr<l.length() and l[ptr] == '0')
        // {
        //     ans += int(r[ptr] - '0');
        //     // cout<<ans<<int(r[ptr] - '0')<<endl;
        //     ptr++;
        // }
        // cout<<ptr<<endl;
        while(ptr < l.length() and l[ptr] == r[ptr])
        ptr++;
        if(ptr<l.length())
        {
            ans += abs(int(r[ptr] - l[ptr]));
            ptr++;
        }
        while(ptr<l.length())
        {
            ptr++;
            ans+=9;
        }
        cout<<ans<<endl;
    }
    return 0;
}