#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long> v(n);
        int fl = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
            if(i>0 and v[i]<v[i-1])
            fl = 1;
        }
        if(fl)
        {
            cout<<0<<endl;
        }
        else{
            long long ans = (v[1] - v[0])/2 +1;
            for(int i = 2;i<n;i++)
            ans = min(ans,(v[i] - v[i-1])/2 + 1);
            cout<<ans<<endl;
        }
        

    }
    return 0;
}