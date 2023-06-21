cout<<"DP"<<endl;
        for(int i = 1;i<=n;i++)
        {
            cout<<i<<" -> ";
            for(auto x:dp[i])
            cout<<x.first<<" ";
            cout<<endl;
        }