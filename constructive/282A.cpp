#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        if (s[0] == '-' || s[1] == '-' || s[2] == '-')
            x--;
        else
            x++;
    }
    cout << x << endl;
    return 0;
}