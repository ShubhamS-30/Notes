#include <bits/stdc++.h>
using namespace std;
/*
Space - O(1)
Time - O(nlog(n))
worst time = O(n*n)
*/
int partition(int l, int r, vector<int> &v)
{
    int less = l - 1;
    int pivot = v[r];

    for (int i = l; i <= r; i++)
    {
        if (v[i] < pivot)
        {
            less++;
            swap(v[i], v[less]);
        }
    }
    less++;
    swap(v[less], v[r]);

    return less;
}
void QS(int l, int r, vector<int> &v)
{
    int n = v.size();
    if (l < r)
    {
        int part = partition(l, r, v);
        QS(l, part - 1, v);
        QS(part + 1, r, v);
    }
}

int main()
{
    vector<int> v = {5, 34, 65, 3, 57, 31, 56, 9, 1};
    QS(0, v.size() - 1, v);
    for (auto x : v)
        cout << x << " ";
    cout << endl;
    return 0;
}