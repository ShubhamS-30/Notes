#include<bits/stdc++.h>
using namespace std;
/*
Space - O(1)
Time - O(n*n)
*/
void bubble_sort(vector<int> v)
{
    int n = v.size();
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<n-i-1;j++)
        {
            if(v[j] > v[j+1])
            swap(v[j],v[j+1]);
        }
    }
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v = {5,34,65,3,57,31,56,9,1};
    bubble_sort(v);
    return 0;
}