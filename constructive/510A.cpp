#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, flag;
    cin >> n >> m;
    flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2)
        {
            if (flag == 1)
            {
                cout << "#";
                flag = 0;
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
                cout << endl;
            }
            else if (flag == 0)
            {
                for (int j = 0; j < m - 1; j++)
                    cout << ".";
                cout << "#" << endl;
                flag = 1;
            }
        }
        else
        {
            for (int j = 0; j < m; j++)
                cout << "#";
            cout << endl;
        }
    }
    return 0;
}