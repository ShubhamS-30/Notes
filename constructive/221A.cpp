#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void fun(int x,vector<int> &v)
{
    if(x == 0)
    return ;
    else
    {
        fun(x-1,v);
        swap(v[x-1],v[x]);
    }
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++)
    {
        if(i == 0)
        v[i] = n;
        else
        v[i] = i;
    }
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}