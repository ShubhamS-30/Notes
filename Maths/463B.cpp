#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    vector<int> v(n+1);
    v[0] = 0;
    for(int i = 1;i<n+1;i++)
    cin>>v[i];
    int cost = 0;
    int e = 0;
    int dep = 0;
    for(int i = 1;i<n+1;i++)
    {
        dep = v[i-1] - v[i];
        e += dep;
        // cout<<v[i]<<" "<<cost<<endl;
        if(e < 0)
        {
            cost += abs(e);
            e = 0;
        }
        // cout<<v[i]<<" "<<cost<<endl;
    }
    cout<<cost<<endl;
    return 0;
}