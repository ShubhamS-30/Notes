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
        vector<ll> v(n,0);
        vector<ll> odd;
        vector<ll> even;
        int fo,fe;
        fo = fe = n;
        ll odmin,evemin;
        odmin = evemin = LONG_LONG_MAX;
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
            if(v[i]%2)
            {
                odd.push_back(v[i]);
                fo = min(fo,i);
                odmin = min(odmin,evemin);
            }
            else
            {
                fe = min(fe,i);
                even.push_back(v[i]);
                evemin = min(evemin,v[i]);
            }
        }
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        if(odd.size() == 0 or even.size() == 0)
        cout<<"YES"<<endl;
        else
        {
            ll lst, ptro,ptre;
            ptro = ptre = 0;
            if(v[0]%2 == 1)
            {
                lst = odd[0];
                ptro++;
            }
            else
            {
                lst = even[0];
                ptre++;
            }
            int fl = 0;
            ll cur;
            for(int i = 1;i<n;i++)
            {
                // cout<<lst<<" "<<i<<endl;
                // if(ptro == odd.size() or ptre == even.size())
                // break;
                if(v[i]%2)
                {
                    if(odd[ptro]<lst)
                    {
                        fl = 1;
                        break;
                    }
                    else
                    {
                        lst = odd[ptro];
                        ptro++;
                    }
                }
                else
                {
                    if(even[ptre]<lst)
                    {
                        fl = 1;
                        break;
                    }
                    else
                    {
                        lst = even[ptre];
                        ptre++;
                    }
                }
            }
            if(fl)
            cout<<"NO"<<endl;
            else
            cout<<"YES"<<endl;
        }
    }
    return 0;
}