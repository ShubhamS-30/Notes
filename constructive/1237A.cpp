#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    ll n;
    cin>>n;
    vector<int> v;
    vector<int> v1;
    int k,op,on,sum;
    op = on = 0;
    sum = 0;
    for(ll i = 0;i<n;i++)
    {
        cin>>k;
        v.push_back(k);
        v1.push_back(k/2);
        sum+=k/2;
    }
    for(int i = 0;i<n;i++)
    {
        if(sum>0 and v[i]<0 and v[i]%2)
        {
            v1[i]--;
            sum--;
        }
        else if(sum<0 and v[i]>0 and v[i]%2)
        {
            v1[i]++;
            sum++;
        }
        else if(sum == 0)
        break;
    }
    for(int i = 0;i<n;i++)
    cout<<v1[i]<<endl;
    return 0;
}