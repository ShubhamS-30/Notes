#include<bits/stdc++.h>
using namespace std;
bool check(int destx,int desty,vector<vector<int>> &visit,vector<vector<int>> &v)
{
    if(destx >= 0 and desty >= 0  and destx < int(visit.size()) and desty < int(visit[0].size()) and visit[destx][desty] == 0 and v[destx][desty] == 0)
    {
        visit[destx][desty] = 1;
        return true;
    }
    return false;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>> v(n,vector<int> (m,0));

    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }
    
    int x,y;
    cin>>x>>y;
    int dx,dy;
    cin>>dx>>dy;
    int rx,ry;
    cin>>rx>>ry;
    vector<vector<int>> visit(n,vector<int> (m,0));

    queue<vector<int>> q;
    q.push({x,y,0});
    visit[x][y] = 1;
    int curx,cury,moves;
    int ans = 1e9;

    while(!q.empty())
    {
        curx = q.front()[0];
        cury = q.front()[1];
        moves = q.front()[2];

        q.pop();

        if(curx == dx and cury == dy)
        {
            ans = moves;
            break;
        }
        
        if(check(curx+rx,cury+ry,visit,v))
        {
            q.push({curx+rx,cury+ry,moves+1});
        }
        if(check(curx + ry,cury -rx,visit,v))
        {
           q.push({curx+ry,cury-rx,moves+1});
        }
        if(check(curx - ry,cury  + rx,visit,v))
        {
           q.push({curx - ry,cury + rx,moves+1});
        }
        if(check(curx - rx,cury - ry,visit,v))
        {
           q.push({curx - rx,cury - ry,moves+1});
        }
    }

    cout<<ans<<endl;


    return 0;
}