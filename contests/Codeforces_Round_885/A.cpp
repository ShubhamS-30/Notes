#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int check(int n,int m,vector<vector<int>> &mall,int x,int y)
{
    int sur = 0;
    if(x == 0 or x == n-1)
    sur++;
    if(y == 0 or y == m-1)
    sur++;
    if(x>0 and mall[x-1][y] == 1)
    sur++;
    if(y>0 and mall[x][y-1] == 1)
    sur++;
    if(x<n-1 and mall[x+1][y] == 1)
    sur++;
    if(y<m-1 and mall[x][y+1] == 1)
    sur++;
    // if(x>0 and y>0 and mall[x-1][y-1] == 1)
    // sur+=2;
    // if(x<n-1 and y)
    return sur;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,k;
        cin>>n>>m>>k;
        ll x,y,xi,yi;
        cin>>x>>y;
        map<pair<int,int>,int> v;
        vector<vector<int>> mall(n,vector<int> (m,0));
        mall[x-1][y-1] = 2;
        int fl = 0;
        x--;y--;
        int ans = 0;
        int d1,d2;
        for(int i = 0;i<k;i++)
        {
            cin>>xi>>yi;
            xi--;
            yi--;
            d1 = abs(xi - x);
            d2 = abs(yi - y);
            if((d1+d2)%2 == 0)
            ans = 1;
        }
       if(ans)
       cout<<"NO"<<endl;
       else
       cout<<"YES"<<endl;

    }
    return 0;
}