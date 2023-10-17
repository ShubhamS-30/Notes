#include<bits/stdc++.h>
using namespace std;
/*
Space - O(1)
Time - O(n*n)
*/
void SS(vector<int> v)
{
    int n = v.size();
    int mn,id,l;

    for(int i = 0;i<n-1;i++)
    {
        mn = v[i];
        id = i;

        for(int j = i+1;j<n;j++)
        {
            if(v[j]<mn)
            {
                mn = v[j];
                id = j;
            }
        }

        swap(v[i],v[id]);
    }

    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
}
int main()
{
    vector<int> v = {5,34,65,3,57,31,56,9,1};
    SS(v);
    return 0;
}