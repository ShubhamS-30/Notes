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
        vector<vector<int>> v(n,vector<int> (n,0));
        vector<int> temp(n*n,0);
        int ptr = 1;
        for(int i = 0;i<n*n;i++)
        {
            if(i%2==0)
            {
                temp[i] = ptr;
            }
            else
            {
                temp[i] = n*n - ptr + 1;
                ptr++;
            }
        }
        // for(auto x:temp)
        // cout<<x<<" ";
        // cout<<endl;

        ptr = 0;
        for(int i = 0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j = 0;j<n;j++)
                v[i][j] = temp[ptr++];
            }
            else
            {
                for(int j = n-1;j>=0;j--)
                v[i][j] = temp[ptr++];
            }
        }
        for(auto x:v)
        {
            for(auto y:x)
            cout<<y<<" ";
            cout<<"\n";
        }
    }
    return 0;
}