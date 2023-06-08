#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll s,n,x,y;
    cin>>s>>n;
    vector<vector<ll>> v;
    for(int i = 0;i<n;i++)
    {
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int fl = 0;
    for(int i = 0;i<n;i++)
    {
        if(s<=v[i][0])
        {
            fl = 1;
            break;
        }
        else
        s+=v[i][1];
    }
    if(fl)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return 0;
}