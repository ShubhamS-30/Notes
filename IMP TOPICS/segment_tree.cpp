#include <bits/stdc++.h>
using namespace std;
vector<long long int> a(100005, -1);
vector<long long int> seg(4 * 100005, -1);
void build(long long int ind, long long int low, long long int high)
{
    if (low == high)
    {
        seg[ind] = a[low];
        return;
    }
    long long int mid = (low + high) / 2;
    build(2 * ind + 1, low, mid);
    build(2 * ind + 2, mid + 1, high);
    seg[ind] = max(seg[2 * ind + 1], seg[2 * ind + 2]);
}
long long int query(long long int ind, long long int low, long long int high, long long int l, long long int r)
{
    // complete overlap
    if (low >= l and high <= r)
    {
        return seg[ind];
    }
    // no overlap
    if (high < l or low > r)
    {
        return INT_MIN;
    }
    long long int mid = (low + high) / 2;
    long long int left = query(2 * ind + 1, low, mid, l, r);
    long long int right = query(2 * ind + 2, mid + 1, high, l, r);
    return max(left, right);
}
int main()
{
    long long int n, k;
    cin >> n;
    vector<long long int> v;
    for (long long int i = 0; i < n; i++)
    {
        cin >> k;
        v.push_back(k);
    }
    build(0, 0, n - 1);
    return 0;
}