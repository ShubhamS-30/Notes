#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int> m;
    int k;
    for(int i = 1;i<=n;i++)
    {
        cin>>k;
        m.insert({k,i});
    }
    for(auto x = m.begin();x!=m.end();x++)
    {
        cout<<x->second<<" ";
    }
    cout<<endl;
    return 0;
}