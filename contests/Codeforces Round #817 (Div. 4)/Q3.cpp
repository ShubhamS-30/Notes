#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int k,in;
        vector<long long int> a(n);
        vector<long long int> odd,even;
        int ans = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]<=0)
            ans = -1;
            if(a[i]%2)
            odd.push_back(a[i]);
            else
            even.push_back(a[i]);
        }
        if(ans == 0)
        {
            if(odd.size() == 0 or even.size() == 0)
            ans = 1;
            else
            {
                sort(odd.begin(),odd.end());
                sort(even.begin(),even.end());
                if(odd[0]<even[0])
                ans = 1;
                else
                ans = -1;
            }
            if(ans == 1)
            cout<<"YES"<<endl;
            else if(ans == -1)
            cout<<"NO"<<endl;
        }
    }
    return 0;
}