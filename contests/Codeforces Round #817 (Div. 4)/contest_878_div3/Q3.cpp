#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1); 
}
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
        int ans , grp,subg,p;
        ans = grp = subg = p = 0;
        for(int i = 0;i<n;i++)
        {
            if(temp[i]<=q)
            p++;
            else
            {
                p = 0;
                if(ans>0 and subg>=k)
                ans++;
                if(subg>=k)
                ans+=factorial(subg);
                subg = 0;
            }
            if(p>=k)
            {
                if(subg == 0)
                grp++;

                subg++;
                
            }
        }
        // ans = ans;
        ans = max(0,ans);
        cout<<ans<<endl;
    }
    return 0;
}