#include<bits/stdc++.h>
using namespace std;
vector<int> vdps,vwgts,vcat;

vector<int> convert_to_vec(string dps)
{
    vector<int> vdps;
    string temp = "";

    for(int i = 0;i<int(dps.length());i++)
    {
        if(dps[i] != ' ')
            temp.push_back(dps[i]);
        else
        {
            vdps.push_back(stoi(temp));
            temp = "";
        }
    }

    if(int(temp.length()))
        vdps.push_back(stoi(temp));

    return vdps;
}
int rec(int cap,int cat,vector<vector<int>> &dp,vector<vector<pair<int,int>>> &cat_wise)
{
    if(cap == 0 or cat == int(cat_wise.size()))
        return 0;
    else if(dp[cap][cat]!=-1)
        return dp[cap][cat];
    else
    {
        
        int ans = rec(cap,cat+1,dp,cat_wise);
        for(int i = 0;i<int(cat_wise[cat].size());i++)
        {
            if(cat_wise[cat][i].second <= cap)
                ans = max(ans,cat_wise[cat][i].first + rec(cap - cat_wise[cat][i].second,cat+1,dp,cat_wise));
        }
        return dp[cap][cat] = ans;
    }
    return 0;
}
int main()
{
    string dps,weights,category;
    int training_size;
    getline(cin,dps);
    getline(cin,weights);
    getline(cin,category);
    cin>>training_size;

    vector<int> vdps,vwgts,vcat;
    

    vdps = convert_to_vec(dps);
    vwgts = convert_to_vec(weights);
    vcat = convert_to_vec(category);
    int n = int(vdps.size());
    int sum = 0;
    vector<vector<pair<int,int>>> cat_wise;
    cat_wise.resize(22);
    for(int i = 0;i<n;i++)
    {
        cat_wise[vcat[i]].push_back(make_pair(vdps[i],vwgts[i]));
        sum += vwgts[i];
    }

    vector<vector<int>> dp(training_size+1,vector<int> (22,-1));
    int ans = rec(training_size,1,dp,cat_wise);

    cout<<ans<<endl;

    return 0;
}