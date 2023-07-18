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
        vector<ll> v1;
        for(int i = 0;i<n;i++)
        cin>>v[i];
        int ans = 1;
        v1.push_back(v[0]);
        for(int i = 1;i<n;i++)
        {
            if(v[i]!=v[i-1])
            v1.push_back(v[i]);
        }
        if(v1.size()>=3)
        {
            vector<ll> v2;
            int l,r,m;
            l = r = m = -1;
            for(int i = 0;i<v1.size();i++)
            {
                if(l == -1)
                {
                    l = v1[i];
                    v2.push_back(v1[i]);
                }
                else if(m == -1)
                {
                    m = v1[i];
                    v2.push_back(v1[i]);
                }
                else if(r == -1)
                {
                    r = v1[i];
                    if(l>m and m>r)
                    {
                        v2.pop_back();
                        v2.push_back(r);
                        m = r;
                        r = -1;
                    }
                    else if(l<m and m<r)
                    {
                        v2.pop_back();
                        v2.push_back(r);
                        m = r;
                        r = -1;
                    }
                    else
                    {
                        v2.push_back(r);
                        l = m;
                        m = r;
                        r = -1;
                    }
                }
            }
            cout<<v2.size()<<endl;
        }
        else
        cout<<v1.size()<<endl;

    }
    return 0;
}