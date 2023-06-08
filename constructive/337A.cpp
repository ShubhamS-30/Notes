#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> f(m,0);
    for(int i = 0;i<m;i++)
    cin>>f[i];
    sort(f.begin(),f.end());
    int ptr1,ptr2,ans;
    ans = INT_MAX;
    ptr1 = 0;ptr2 = n-1;
    while(ptr2<m)
    {
        ans = min(ans,f[ptr2] - f[ptr1]);
        ptr1++;
        ptr2++;
    }
    cout<<ans<<endl;
    return 0;
}