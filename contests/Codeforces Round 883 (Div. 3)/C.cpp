#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
bool comp(vector<int> a,vector<int> b)
{
    if(a[0]!=b[0])
    return a[0]>b[0];
    else if(a[1]!=b[1])
    return a[1]<b[1];
    else
    return a[2]<b[2];
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,h;
        cin>>n>>m>>h;
        vector<vector<int>> v(n,vector<int>(m,0));
        for(int i = 0;i<n;i++)
        {
            for(int j = 0;j<m;j++)
            {
                cin>>v[i][j];
            }
            // if(m>1)
           
        }
        vector<vector<int>> result;
        int pt,pen,tim;
        vector<int> temp;
        int fl = 0;
        for(int i = 0;i<n;i++)
        {
            sort(v[i].begin(),v[i].end());
            pt = pen = tim = fl = 0;
            temp.clear();
            for(int j = 0;j<m;j++)
            {
                if(tim+v[i][j]>h)
                {
                    temp.push_back(pt);
                    temp.push_back(pen);
                    temp.push_back(i);
                    result.push_back(temp);
                    fl = 1;
                    break;
                }
                tim += v[i][j];
                pen += tim;
                pt++;
            }
            if(fl == 0)
            {
                temp.push_back(pt);
                temp.push_back(pen);
                temp.push_back(i);
                result.push_back(temp);
            }
        }
        // if(result.size()>1)
        sort(result.begin(),result.end(),comp);
        int ansk = -1;
        // cout<<result.size()<<endl;
        for(int i = 0;i<result.size();i++)
        {
            // cout<<result[i][0]<<" "<<result[i][1]<<" "<<result[i][2]<<endl;
            if(result[i][2] == 0)
            {
                // cout<<(i+1)<<endl;
                ansk = i+1;
                // break;
            }
        }
        cout<<ansk<<endl;
    }
    return 0;
}