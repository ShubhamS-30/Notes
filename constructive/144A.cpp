#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, h, s, sidx, hidx;
    h = 0;
    s = 101;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
        if (h < k)
        {
            h = k;
            hidx = i;
        }
        if (s >= k)
        {
            s = k;
            sidx = i;
        }
    }
    if (sidx < hidx)
    {
        cout << n - sidx + hidx - 2 << endl;
    }
    else if (hidx < sidx)
    {
        cout << hidx + n - sidx - 1 << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}