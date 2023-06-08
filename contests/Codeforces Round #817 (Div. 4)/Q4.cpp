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
        vector<int> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        int mx_id;
        int mx = -1;
        for(int i = 1;i<n;i++)
        {
            if(mx<v[i])
            {
                mx = v[i];
                mx_id = i;
            }
        }
        int l,r;
        l = mx_id - 1;
        r = l;
        vector<int> ans(n,0);
        if((mx_id == n-1 and v[r]<v[0]) or n == 1)
        {
            ans[0] = mx;
            for(int i = 1;i<=n;i++)
            ans[i] = v[i-1];
            for(auto x:ans)
            cout<<x<<" ";
            cout<<endl;
        }
        else
        {
            while(l>=0 and v[l]>v[0])
            {
                l--;
            }
            if(l<r)
            l++;
            if(l<0)
            l = 0;
            ans[0] = mx;
            int id = 1;
            for(int i = mx_id+1;i<n;i++)
            {
                ans[id] = v[i];
                id++;
            }
            for(int i = r;i>=l;i--)
            {
                ans[id] = v[i];
                id++;
            }
            for(int i = 0;i<l;i++)
            {
                ans[id] = v[i];
                id++;
            }
            for(auto x:ans)
            cout<<x<<" ";
            cout<<endl;
        }
    }
    return 0;
}