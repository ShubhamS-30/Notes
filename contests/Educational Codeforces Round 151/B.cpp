#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll xa, ya, xb, yb, xc, yc, ans;
        cin >> xa >> ya >> xb >> yb >> xc >> yc;
        ans = 1;
        // ABC x CBA
        if ((xa <= xb and xa <= xc) or (xa >= xb and xa >= xc))
        {
            // BC y CB
            if ((ya <= yb and ya <= yc) or (ya >= yb and ya >= yc))
                ans += min(abs(ya - yb), abs(ya - yc));
            ans +=  min(abs(xb - xa), abs(xc - xa));
        }
        else if ((ya <= yb and ya <= yc) or (ya >= yb and ya >= yc))
        {
            // BC x CB
            if ((xa <= xb and xa <= xc) or (xa >= xb and xa >= xc))
                ans += min(abs(xa - xb), abs(xa - xc));
            ans +=  min(abs(yb - ya), abs(yc - ya));
        }
        cout<<ans<<endl;
    }
    return 0;
}