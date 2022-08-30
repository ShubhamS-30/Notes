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
        string s;
        cin >> s;
        unordered_map<char, int> m;
        m['T'] = 1;
        m['i'] = 1;
        m['m'] = 1;
        m['u'] = 1;
        m['r'] = 1;
        if (n == 5)
        {
            for (int i = 0; i < s.length(); i++)
            {
                m[s[i]]--;
                if (m[s[i]] < 0)
                {
                    cout << "NO" << endl;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
    return 0;
}