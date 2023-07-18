#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,c;
        cin>>n>>k;
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<n;i++)
        {
            cin>>c;
            mp[c].push_back(i);
        }
        int ans = 1e8;
        for(auto x:mp)
        {
            int l = mp[x.first][0];
            vector<int> v;
            v.push_back(mp[x.first][0]);
            int diff = 1e8;
            for(int i = 1;i<mp[x.first].size();i++)
            {
                v.push_back(mp[x.first][i] - l - 1);
                l = mp[x.first][i];
            }
            v.push_back(n - l - 1);
            sort(v.begin(),v.end(),greater<int>());
            ans = min(diff,max(v[0]/2,v[1]));
        }
        cout<<ans<<endl;
    }
    return 0;
}