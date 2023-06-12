#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll q,k;
        cin>>q;
        vector<ll> v;
        string s = "";
        int count = 0;
        for(ll i = 0;i<q;i++)
        {
            cin>>k;
            if(i == 0)
            {
                v.push_back(k);
                s.push_back('1');
            }
            else
            {
                if(count == 0)
                {
                    if(v.back()<=k)
                    {
                        v.push_back(k);
                        s.push_back('1');
                    }
                    else if(v.back()>k and k<=v[0])
                    {
                        count++;
                        v.push_back(k);
                        s.push_back('1');
                    }
                    else
                    s.push_back('0');
                }
                else
                {
                    if(k>=v.back() and k<=v[0])
                    {
                        v.push_back(k);
                        s.push_back('1');
                    }
                    else
                    s.push_back('0');
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}