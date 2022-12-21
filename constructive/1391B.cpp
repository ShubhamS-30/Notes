#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char k;
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                cin>>k;
                if(i!=n-1 and j == m-1 and k!='D')
                ans++;
                if(i == n-1 and k!='R')
                ans++;
            }
        }
        cout<<max(0,ans-1)<<endl;
    }
    return 0;
}