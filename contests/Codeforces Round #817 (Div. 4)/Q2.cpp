#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int k,in;
        cin>>k;
        vector<long long int> a,b,c,d;
        unordered_map<long long int,vector<int>> m;
        for(int i = 0;i<n;i++)
        {
            cin>>in;
            a.push_back(in);
            m[in].push_back(i);
        }
        for(int i = 0;i<n;i++)
        {
            cin>>in;
            b.push_back(in);
        }
        c = a;
        d = b;
        sort(c.begin(),c.end());
        sort(d.begin(),d.end());
        vector<long long int> ans(n,0);
        long long int a1,b1,idx;
        for(int i = 0;i<n;i++)
        {
            a1 = c[i];b1 = d[i];
            idx = m[a1].back();
            m[a1].pop_back();
            ans[idx] = b1;
        }
        for(int i = 0;i<n;i++)
        cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}