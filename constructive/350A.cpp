#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> c(n,0);
    vector<int> w(m,0);
    for(int i = 0;i<n;i++)
    cin>>c[i];
    for(int i = 0;i<m;i++)
    cin>>w[i];
    sort(c.begin(),c.end());
    sort(w.begin(),w.end());
    int ans = 0;
    if(w[0]<=c.back() or 2*c[0]>=w[0])
    ans = -1;
    else 
    {
        ans = max(2*c[0],c.back());
    }
    cout<<ans<<endl;
    return 0;
}