#include<bits/stdc++.h>
using namespace std;
/*
Space - O(1)
Time - O(n*n)
Best Case - O(n)
*/
void IS(vector<int> v)
{
    int n = v.size();
    int key,j;
    for(int i = 0;i<n-1;i++)
    {
        key = v[i+1];
        j = i;
        while(j>=0 and v[j] > key)
        {
            v[j+1] = v[j];
            j--;
        }
        v[j+1] = key;
    }
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v = {5,34,65,3,57,31,56,9,1};
    IS(v);
    return 0;
}