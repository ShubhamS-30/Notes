#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<vector<char>> v(8,vector<char>(8,'.'));
        for(int i = 0;i<8;i++)
        {
            for(int j = 0;j<8;j++)
            cin>>v[i][j];
        }
        string ans = "";
        for(int j = 0;j<8;j++)
        {
            for(int i = 0;i<8;i++)
            {
                if(v[i][j]!='.')
                ans.push_back(v[i][j]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}