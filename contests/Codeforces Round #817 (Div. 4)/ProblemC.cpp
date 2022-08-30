#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        int n, flag;
        cin >> n;
        string s;
        unordered_map<string, vector<int>> m;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> s;
                m[s].push_back(i + 1);
            }
        }
        vector<int> v;
        vector<int> pts(3, 0);
        for (auto x = m.begin(); x != m.end(); x++)
        {
            // cout << x->first << "  ";
            v = x->second;
            // for (int i = 0; i < v.size(); i++)
            //     cout << v[i] << " ";
            // cout << endl;
            if (v.size() == 2)
            {
                pts[v[0] - 1]++;
                pts[v[1] - 1]++;
            }
            if (v.size() == 1)
            {
                pts[v[0] - 1] += 3;
            }
        }
        // cout << endl;
        cout << pts[0] << " " << pts[1] << " " << pts[2] << endl;
    }
    return 0;
}