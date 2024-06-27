#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,m;
        cin>>n>>m;
        vector<vector<int>> v(n,vector<int> (m,-1));
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                cin>>v[i][j];
            }
        }
        int n1,n2,n3,n4,c;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                n1 = n2 = n3 = n4 = -1e9;
                c = 0;
                if(i>0)
                {
                    n1 = v[i-1][j];
                    if(n1 < v[i][j])
                    c++;
                }
                else
                    c++;
                if(i<n-1)
                {
                    n2 = v[i+1][j];
                    if(n2 < v[i][j])
                    c++;
                }
                else
                    c++;
                
                if(j>0)
                {
                    n3 = v[i][j-1];
                    if(n3 < v[i][j])
                    c++;
                }
                else
                    c++;
                if(j<m-1)
                {
                    n4 = v[i][j+1];
                    if(n4 < v[i][j])
                        c++;
                }
                else
                    c++;
                
                if(c == 4)
                {
                    v[i][j] = max(n1,max(n2,max(n3,n4)));
                }
            }
        }
        //cout<<"ANS"<<endl;
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            cout<<v[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}