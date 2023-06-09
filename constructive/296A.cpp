#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i =  0;i<n;i++)
    cin>>v[i];
    int freq = 0;
    unordered_map<int,int> m;
    for(auto x:v)
    {
        m[x]++;
        freq = max(freq,m[x]);
    }
    if(freq>round(double(n)/2))
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return 0;
}