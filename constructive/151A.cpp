#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << floor(min({(k * l / nl), (c * d) / 1, (p / np)}) / n) << endl;
    return 0;
}
