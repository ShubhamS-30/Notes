#include<bits/stdc++.h>
using namespace std;
int dp[1001][201][12][3][3][2][2];
vector<pair<int,int>> wk,allr,bowl,bat;
vector<int> price,value;
int n,nwk;
int rec(int budget,int idx,int sel,int bowltaken,int battaken,int wktaken,int allrtaken)
{
    if(idx == n or budget == 0 or sel == 11 or (idx >= nwk and wktaken!=0))
    {
        if(bowltaken == 0 and battaken == 0 and wktaken == 0 and allrtaken == 0 and sel == 11)
            return 0;
        else
            return -1e9;
    }
    else if(dp[budget][idx][sel][bowltaken][battaken][wktaken][allrtaken] != -1)
        return dp[budget][idx][sel][bowltaken][battaken][wktaken][allrtaken];
    else
    {
        int ans = rec(budget,idx+1,sel,bowltaken,battaken,wktaken,allrtaken);
        if(price[idx] <= budget)
        {
            if(idx < nwk)
            {
                ans = max(ans,value[idx] + rec(budget - price[idx],idx+1,sel+1,bowltaken,battaken,max(wktaken-1,0),allrtaken));
            }
            else
            {
                if(idx % 2)
                {
                    ans = max(ans,value[idx] + rec(budget - price[idx],idx+1,sel+1,bowltaken,max(battaken-1,0),wktaken,allrtaken));
                }
                else
                {
                    if(idx % 4)
                    {
                        ans = max(ans,value[idx] + rec(budget - price[idx],idx+1,sel+1,max(bowltaken-1,0),battaken,wktaken,allrtaken));
                    }
                    else
                    {
                        ans = max(ans,value[idx] + rec(budget - price[idx],idx+1,sel+1,bowltaken,battaken,wktaken,max(allrtaken-1,0)));
                    }
                }
            }
        }
        return dp[budget][idx][sel][bowltaken][battaken][wktaken][allrtaken] = ans;
    }
}
int main()
{
    cin>>n;
    price.resize(n);
    value.resize(n);

    for(int i = 0;i<n;i++)
    cin>>price[i];

    for(int j = 0;j<n;j++)
    cin>>value[j];

    int budget;
    cin>>budget;

    nwk = ceil(n/5);

    memset(dp,-1,sizeof(dp));
    // for(int i = 0;i<n;i++)
    // {
    //     if(i<nwk)
    //     {
    //         wk.push_back({price[i],value[i]});
    //     }
    //     else
    //     {
    //         if(i%2)
    //             bat.push_back({price[i],value[i]});
    //         else 
    //         {
    //             if(i%4 == 0)
    //             {
    //                 allr.push_back({price[i],value[i]});
    //             }
    //             else
    //                 bowl.push_back({price[i],value[i]});
    //         }
    //     }
    // }
    int out = rec(budget,0,0,2,2,1,1);
    cout<<out<<endl;
    return 0;
}