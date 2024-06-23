#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    long long int T;
    cin >> T;
    while (T--)
    {
        long long n;
        cin>>n;
        string s;
        cin>>s;
        int inv = 0;
        unordered_map<int,long long> mp;
        long long l,r;
        l = 0,r = n-1;
        long long val = 0;
        for(int i = 0 ;i<n;i++)
        {
            if(s[i] == 'L')
            val += i;
            else
            val += (n - i - 1);
        }
        //cout<<"Initial val = "<<val<<endl;
        while(l<=r)
        {
            if(l<=n - r - 1)
            {
                
                if(s[l] == 'L')
                {
                    val += ((n - l - 1) - l);  
                    inv++;
                    mp[inv] = val;
                   // cout<<"Inversion "<<inv<<" = "<<val<<endl;
                }
                l++;
            }
            else
            {
               
                if(s[r] == 'R')
                {
                    val += (r - (n - r - 1));
                    inv++;
                    mp[inv] = val;
                    //cout<<"Inversion "<<inv<<" = "<<val<<endl;
                }
                r--;
            }
        }
        long long last = 0;
        for(int i = 1;i<=n;i++)
        {
            if(i > inv)
            cout<<val<<" ";
            else
            cout<<mp[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
