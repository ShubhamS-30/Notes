#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
vector<int> solve(vector<ll> &v,int n)
{
    int l,r,fl;
    int count = 0;
    fl = 0;
    l = r = 0;
    for(int i = 1;i<n;i++)
    {
        if(v[i] < v[i-1] and fl == 0)
        {
            // cout<<"ID "<<i<<endl;
            fl = 1;
            l = i-1;
            count++;
            if(count>1)
             return {-1};
        }
        else if(v[i] > v[i-1] and fl == 1)
        {
            r = i-1;
            fl = 0;
            // cout<<"ID "<<i<<" "<<v[i]<<" "<<v[l-1]<<endl;
            if(v[l] > v[i] or (l>0 and v[r]<v[l-1]))
            return {-1};
        }
        if(count>1)
        return {-1};
        // cout<<l<<" "<<r<<" "<<count<<" "<<v[l]<<" "<<v[r]<<endl;
    }
    if(fl == 1)
    {
        r = n-1;
        if(r - l +1 !=n and v[l] >= v[n-1] and v[r]<=v[l-1])
            return {-1};
    }
    
    return {l+1,r+1};
}
vector<int> solve1(vector<ll> &v,int n)
{
    int l,r;
    l = r = 0;
    vector<ll> v1 = v;
    int fl ,count;
    fl = count = 0;
    sort(v1.begin(),v1.end());
    for(int i = 0;i<n;i++)
    {
        if(v[i]!=v1[i] and fl == 0)
        {
            fl  = 1;
            count++;
            l = i;
            if(count>1)
            return {-1};
        }
        else if(v[i] < v1[i] and fl == 1)
        {
            r = i;
            int id = 0;
            for(int j = r;j>=l;j--)
            {
                if(v[j]!=v1[l+id])
                {
                    return {-1};
                }
                id++;
            }
        }
    }
    return {l+1,r+1};
}
int main()
{
    int n;
    cin>>n;
    vector<ll> v(n,0);
    for(int i  =0;i<n;i++)
    cin>>v[i];
    vector<int> ans = solve(v,n);
    if(ans[0] == -1)
    cout<<"no"<<endl;
    else
    {
        cout<<"yes"<<endl;
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}