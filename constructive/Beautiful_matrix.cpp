#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> v(5, vector<int>(5, 0));
    int k, x, y;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> k;
            v[i][j] = k;
            if (k == 1)
            {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(x - 2) + abs(y - 2) << endl;
    return 0;
}