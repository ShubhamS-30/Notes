#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n,h,m;
    cin>>n;
    vector<vector<int>> v;
    // cout<<"A"<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>h>>m;
        v.push_back({h,m});
    }
    // cout<<v[0].size()<<endl;
    // cout<<"A"<<endl;
    int c ,ans;
    c = 1;
    ans = 0;
    for(int i = 1;i<n;i++)
    {
        // cout<<i<<endl;
        if(v[i][0] == v[i-1][0] and v[i][1] == v[i-1][1])
        {
            c++;
        }
        else
        {
            ans = max(c,ans);
            c = 1;
        }
    }
    // cout<<"E"<<endl;
    ans = max(c,ans);
    // cout<<"B"<<endl;
    cout<<ans<<endl;
    // cout<<"X"<<endl;
    return 0;
}