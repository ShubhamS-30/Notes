#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, k;
    cin >> n;
    string s = "";
    while (n > 0)
    {
        k = n % 10;
        n = n / 10;
        if (k >= 5)
        {
            if (k == 9 and n != 0)
                k = 9 - k;
            else if (k != 9 and n >= 0)
                k = 9 - k;
        }
        s = to_string(k) + s;
    }
    cout << s << endl;
    return 0;
}