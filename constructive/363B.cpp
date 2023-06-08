#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++)
    cin>>v[i];
    
    int sum = 0;
    for(int i = 0;i<k;i++)
    sum+=v[i];
    int ans = sum;
    int id = 0;
    for(int i = k;i<n;i++)
    {
        sum = sum + v[i] - v[i-k];
        // cout<<sum<<" "<<i-k+1<<endl;
        if(sum<ans)
        {
            ans = sum;
            id = i-k+1;
        }
    }
    cout<<id+1<<endl;
    return 0;
}
