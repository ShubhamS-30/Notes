#include <bits/stdc++.h>
using namespace std;
#define ll long long int
// long long rec(long long rem, ) 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        if (k > 40)
        {
            cout << 0 << endl;
        }
        else
        {
            ll fib1, fib2, fib3;
            fib1 = 0;
            fib2 = 1;
            vector<ll> dp(k+1, 1);
            // dp[0] = 0;
            // dp[1] = 1;
            for (int i = 2; i <= k; i++)
            {
                fib3 = fib1 + fib2;
                // cout<<i+3<<" "<<fib3<<endl;
                dp[i] = dp[i-1]+dp[i-2];
                fib1 = fib2;
                fib2 = fib3;
            }
            ll t1,t2;
            t1 = dp[k-3];
            t2 = dp[k-2];
            ll ans = 0;
            for(int i = 0;i<=n;i++)
            {
                if(n-t2*i>=0 and (n -t2*i)%t1==0 and i>=(n-t2*i)/t1)
                ans++;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}