#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        string s,c;
        cin>>s;
        vector<int> pos(m);
        vector<pair<int,char>> temp(m);
        map<int,char> mp;
        for(int i = 0;i<m;i++)
        {
            cin>>pos[i];
        }
        for(auto x:pos)
        {
            mp[x-1] = '.';
        }
        cin>>c;
        int ptr = 0;
        sort(c.begin(),c.end());
        for(auto &x:mp)
        {
           // cout<<c[ptr]<<endl;
            x.second = c[ptr];
            ptr++;
        }
        for(auto &x:mp)
        {
            s[x.first] = x.second;
        }

        cout<<s<<endl;
    }
    return 0;
}
/*
1
1 2
a
1 1
cb
*/