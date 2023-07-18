#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string db;
        cin>>db;
        int m;
        cin>>m;
        string l,r;
        cin>>l>>r;
        unordered_map<int,vector<int>> mp;
        for(int i = 0;i<db.length();i++)
        {
            mp[db[i] - '0'].push_back(i);
        }
        int idx = -1;
        int mxidx = -1;
        int mx;
        int fl = 0;
        for(int i = 0;i<m;i++)
        {
            mx = 0;
            for(int j = (l[i]-'0');j<=(r[i] - '0');j++)
            {
                if(mp[j].size() == 0)
                {
                    fl = 1;
                    break;
                }
                idx = upper_bound(mp[j].begin
                (),mp[j].end(),mxidx) - mp[j].begin();
                if(idx == mp[j].size())
                {
                    fl = 1;
                    break;
                }
                mx = max(mx,mp[j][idx]);
            }
            if(fl)
            break;
            mxidx = mx;
        }
        if(fl)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}