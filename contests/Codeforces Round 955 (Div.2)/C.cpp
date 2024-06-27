#include<bits/stdc++.h>
using namespace std;
void solve()
{
    long long n,l,r;
    cin>>n>>l>>r;
    vector<long long> v(n);
    for(int i = 0;i<n;i++)
    cin>>v[i];
    int ans = 0,left,right;
    long long pts = 0,t = 0;
    left = right = 0;
    pts = 0;
    while(right < n)
    {
        t += v[right];
        while(left <= right and t > r)
        {
            t -= v[left];
            left++;
        }
        if(t >= l)
        {
            if(t <= r)
            {
                ans++;
                left = right + 1;
                t = 0;
            }
        }
        right++;
    }
    cout<<ans<<endl;
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        solve();
    }
    return 0;
}