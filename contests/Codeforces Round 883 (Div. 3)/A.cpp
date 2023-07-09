#include <bits/stdc++.h>
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
        vector<int> a(n,0);
        vector<int> b(n,0);
        for(int i = 0;i<n;i++)
        cin>>a[i]>>b[i];
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            if(a[i]-b[i]>0)
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}