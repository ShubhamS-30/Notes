#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        int n, flag;
        flag = 0;
        cin >> n;
        string s1, s2;
        cin >> s1;
        cin >> s2;
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                if ((s1[i] == 'G' and s2[i] == 'B') or (s1[i] == 'B' and s2[i] == 'G'))
                    continue;
                else
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
            cout << "YES" << endl;
    }
    return 0;
}