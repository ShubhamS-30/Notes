#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long int n, ans, lptr, rptr, k, flag;
        cin >> n;
        string s;
        cin >> s;
        flag = 1;
        ans = 0;
        lptr = 0;
        rptr = n - 1;
        k = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                ans = ans + i;
            else if (s[i] == 'R')
                ans += n - i - 1;
        }
        // cout << ans << endl;
        vector<long long int> v;
        while (k <= n)
        {
            while (lptr != rptr - 1 and lptr <= n / 2 and s[lptr] == 'R')
            {
                flag = 1;
                lptr++;
            }
            if (s[lptr] == 'L')
            {
                // cout << "A" << endl;
                s[lptr] = 'R';
                ans = ans - lptr + n - lptr - 1;
                flag = 0;
            }
            k++;
            v.push_back(ans);
            // cout << s << " " << ans << " " << lptr << endl;
            if (k > n)
                break;
            while (rptr > n / 2 and s[rptr] == 'L')
            {
                flag = 1;
                rptr--;
            }
            // cout << "R" << rptr << endl;
            if (s[rptr] == 'R')
            {
                s[rptr] = 'L';
                ans = ans - (n - rptr - 1) + rptr;
                flag = 0;
            }
            k++;
            // cout << s << " " << ans << " " << rptr << endl;
            v.push_back(ans);
        }
        // cout << s << endl;
        for (ll i = 0; i < n; i++)
            cout << v[i] << "  ";
        cout << endl;
    }
    return 0;
}
