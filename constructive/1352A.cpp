#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x, num;
        cin >> n;
        string k;
        k = to_string(n);
        num = 0;
        vector<int> v;
        for (int i = 0; i < k.length(); i++)
        {
            if (k[i] != '0')
            {
                num++;
                x = k[i] - '0';
                v.push_back(x * (pow(10, k.length() - i - 1)));
            }
        }
        cout << num << endl;
        for (int i = 0; i < v.size(); i++)
            cout << v[i] << "  ";
        cout << endl;
    }
    return 0;
}