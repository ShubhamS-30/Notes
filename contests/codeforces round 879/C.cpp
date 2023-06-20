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
        string a,b,c;
        cin>>a>>b;
        c = b;
        reverse(c.begin(),c.end());
        int cnt1,cnt2;
        cnt1 = cnt2 = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i]!=b[i])
            cnt1++;
            if(a[i]!=c[i])
            cnt2++;
        }
        int ans = 0;
        int ans2 = 0;
        // if(cnt1<=cnt2)
        {
            ans = 2*cnt1 - (cnt1%2);
        }
        // else
        {
            if(cnt2 == 0)
            ans2 = 2;
            else
            ans2 = 2*cnt2 - (1 - cnt2%2);
        }
        cout<<min(ans,ans2)<<endl;
    }
    return 0;
}