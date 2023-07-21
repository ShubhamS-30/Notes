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
        vector<vector<int>> v;
        int a,b;
        for(int i = 0;i<n;i++)
        {
            cin>>a>>b;
            v.push_back({b,a,i});
        }
        sort(v.begin(),v.end());
        int ans = -1;
        for(int i = n-1;i>=0;i--)
        {
            if(v[i][1]<=10)
            {
                ans = v[i][2];
                break;
            }
        }
        cout<<ans+1<<endl;
    }
    return 0;
}