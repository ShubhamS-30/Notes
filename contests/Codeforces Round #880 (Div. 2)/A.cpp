#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    vector<string> ans;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        vector<vector<int>> pos;
        int num;
        int fl,fl1;
        fl1 = 0;
        sort(v.begin(),v.end());
        for(int i = 0;i<n;i++)
        {
            num = v[i];
            if(num == 0)
            pos.push_back({0});
            else
            {
                int fl = 0;
                for(int j = 0;j<pos.size();j++)
                {
                    // cout<<pos[j].back()<<" "<<num<<endl;
                    if(pos[j].back()==num-1)
                    {
                        pos[j].push_back(num);
                        fl = 1;
                        break;
                    }
                }
                if(fl == 0)
                {
                    cout<<"NO"<<endl;
                    fl1 = 1;
                    break;
                }
            }
        }
        if(fl1 == 0)
        cout<<"YES"<<endl;
    }
}