#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> v(3,0);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end(),greater<int>());
        if(v[0]+v[1]>=10)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

    }
    return 0;
}