#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k,h;
        cin>>n>>m>>k>>h;
        vector<ll> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        int ans = 0;
        ll vh,vs,ps,ph,fl;
        unordered_map<int,int> tk;
        for(int vlad_pos = 0;vlad_pos<m;vlad_pos++)
        {
            vh = h;
            vs = vlad_pos+1;
            // cout<<vh<<" vlad "<<vs<<endl;
            for(int per = 0;per<n;per++)
            {
                fl = 0;
                // cout<<"person no = "<<per+1<<endl;
                
                for(int pos = 0;pos<m;pos++)
                {
                    if(tk[per] == 1)
                     break;
                    if(pos!=vlad_pos)
                    {
                        ps = pos+1;
                        ph =  v[per];
                        // cout<<ph<<" per "<<ps<<endl;
                        if(abs(ph - vh) == k*abs(ps - vs))
                        {
                            ans++;
                            fl = 1;
                            // cout<<"break "<<per<<endl;
                            tk[per] = 1;
                            // break;
                        }
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}