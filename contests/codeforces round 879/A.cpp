#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    vector<int> x;
    while(t--)
    {
        int n,k,neg,pos;
        cin>>n;
        pos = neg = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>k;
            if(k == 1)
            pos++;
            else
            neg++;
        }
        int ans = 0;
        if(neg%2==1 or neg>pos)
        {
            if(neg>pos)
            {
                k = abs(neg - pos)/2 + abs(neg - pos)%2;
                ans += k;
                neg -= k;
                pos += k;
            }
            if(neg%2==1)
            {
                neg--;
                pos++;
                ans++;
            }
        }
        
        x.push_back(ans);
    }
    for(auto y:x)
    cout<<y<<endl;
    return 0;
}