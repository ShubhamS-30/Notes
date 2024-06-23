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
        vector<vector<int>> bridge(k);
        for(int i = 0;i<n;i++)
        {
            cin>>c;
            bridge[c-1].push_back(i+1);
        }
        int ans = 1e8,temp = 1e8;
        int pos = 0;
        for(int i = 0;i<k;i++)
        {
            pos = 0;
            temp = 1e8;
            priority_queue<int> jumps;
            for(int j = 0;j<bridge[i].size();j++)
            {
                jumps.push(bridge[i][j] - pos -1);
                pos = bridge[i][j];
            }
            jumps.push(n - pos);
            pos = n;
            temp = jumps.top();
            jumps.pop();
            jumps.push(temp/2);
            ans = min(ans,jumps.top());
        }
        cout<<ans<<endl;
    }
    return 0;
}