#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
vector<int> ronam(string s,unordered_map<char,int> dict)
{
    vector<int> v(s.length(),0);
    v[s.length() - 1] = dict[s[s.length()-1]];
    int neg = 0;
    int val;
    for(int i = s.length()-2;i>=0;i--)
    {
        if(neg == 0)
        {
            if(dict[s[i]]<dict[s[i+1]])
            {
                neg = 1;
                v[i] = -1*dict[s[i]];
                val = dict[s[i+1]];
            }
            else
            v[i] = dict[s[i]];
        }
        else
        {
            if(dict[s[i]]>=val)
            {
                neg = 0;
                val = -1;
                v[i] = dict[s[i]];
            }
            else
            v[i] = -1*dict[s[i]];
        }
    }
    return v;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll ans = 0;
        string s;
        cin>>s;
        unordered_map<char,int> dict;
        dict['A'] = 1;
        dict['B'] = 10;
        dict['C'] = 100;
        dict['D'] = 1000;
        dict['E'] = 10000;
        vector<int> v;
        v = ronam(s,dict);
        for(auto x:v)
        {
            ans+=x;
            // cout<<x<<" ";
        }
        // cout<<endl;
        // cout<<ans<<endl;
        int neg = 0;
        ll mneg = LONG_MAX;
        int id = -1;
        int mid = -1;
        ll sneg = 0;
        for(int i = v.size()-1;i>=0;i--)
        {
            if(v[i]<0)
            {
                if(neg == 0)
                {
                    neg = 1;
                    id = i+1;
                }
                sneg += v[i];
            }
            else
            {
                if(neg == 1)
                {
                    if(mneg>sneg)
                    {
                        sneg = mneg;
                        mid = id;
                    }
                    sneg = 0;
                    neg = 0;
                }
            }
        }
        if(neg == 1)
        {
            if(mneg>sneg)
            {
                sneg = mneg;
                mid = id;
            }
                sneg = 0;
                neg = 0;
        }
        // cout<<mid<<endl;
        ll sum = 0;
        int ptr = 0;
        string k = s;
        while(ptr<k.length() and k[ptr]=='E')
        ptr++;
        vector<int> v1;
        if(ptr<k.length())
        {
            if(ptr>0)
            ptr--;
            // cout<<ptr<<" "<<"ptr"<<endl;
            k[ptr] = 'E';
            sum = 0;
            v1 = ronam(k,dict);
            for(auto x:v1)
            {
                sum+=x;
                // cout<<x<<" ";
            }
            // cout<<endl;
            // cout<<"ptr"<<" "<<sum<<endl;
            ans = max(ans,sum);
        }
        if(mid>-1)
        {
            for(auto x:dict)
            {
                k = s;
                k[mid] = x.first;
                v1 = ronam(k,dict);
                sum = 0;
                for(auto y:v1)
                sum+=y;
                ans = max(ans,sum);
            }
            if(mid>0)
            {
                mid--;
                for(auto x:dict)
               {
                k = s;
                k[mid] = x.first;
                v1 = ronam(k,dict);
                sum = 0;
                for(auto y:v1)
                sum+=y;
                ans = max(ans,sum);
              }
            }
        }
        // cout<<"A"<<endl;
        cout<<ans<<endl;
    }
    return 0;
}
