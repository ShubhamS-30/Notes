#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
vector<int> seive(int N)
{
    vector<int>isprime(N+1, true);
    vector<int>prime;
    vector<int>SPF(N+1);
    isprime[0] = isprime[1] = false ;
    for (long long int i=2; i<N ; i++)
    {
        if (isprime[i])
        {
            prime.push_back(i);
            SPF[i] = i;
        }
        for (long long int j=0;
             j < (int)prime.size() &&
             i*prime[j] < N && prime[j] <= SPF[i];
             j++)
        {
            isprime[i*prime[j]]=false;
            SPF[i*prime[j]] = prime[j] ;
        }
    }
    return prime;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll> ans(n);
        vector<int> primes = seive(n+1);
        unordered_map<int,int> m;
        for(int i = 1;i<=n;i++)
        m[i] = 1;
        int l = primes.size()-1;
        int idx = 0;
        while(l>0)
        {
            ans[idx] = primes[l];
            m[primes[l]] = 0;
            idx++;
            l--;
            
        }
        // for(auto x:ans)
        // cout<<x<<" ";
        // cout<<endl;
        // for(auto x:m)
        // cout<<x.first<<" "<<x.second<<endl;
        ans[n-1] = 2;
        m[2] = 0;
         for(auto x:m)
        {
            if(x.first>1 and x.second == 1)
            {
                ans[idx] = x.first;
                idx++;
            }
        }
        m[1] = m[2] = 0; 
        
        ans[idx] = 1;
        swap(ans[idx],ans[n/2 - (n+1)%2]);
        idx++;
       
        for(auto x:ans)
        cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}