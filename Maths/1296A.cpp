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
        ll sum = 0;
        vector<int> v(n,0);
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        if(sum%2)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            unordered_map<int,int> odd;
            unordered_map<int,int> even;
            int c_even = 0;
            for(int i = 0;i<n;i++)
            {
                if(v[i]%2)
                odd[v[i]]++;
                else
                {
                    even[v[i]]++;
                    c_even++;
                }
            }
            if(c_even == 0 or odd.size() == 0)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }

    }
    return 0;
}