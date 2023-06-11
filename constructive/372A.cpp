#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++)
    cin>>v[i];
    int start,end,ans,c;
    ans = c = 0;
    vector<int> pre(n,0);
    for(int i = 0;i<n;i++)
    {
        if(v[i])
        c++;
        pre[i] = c;
    }
    for(int i = 0;i<n;i++)
    {
        if(v[i] == 0)
        {
            start = i;
            end = i;
            while(end!=n)
            {
                c = 0;
                for(int j = start;j<=end;j++)
                {
                    if(v[j] == 0)
                    c++;
                }
                if(start>0)
                c+=pre[start-1];
                c+=pre.back() - pre[end];
                ans = max(ans,c);
                end++;
            }
        }
    }
    if(ans == 0)
    ans = n-1;
    cout<<ans<<endl;


    return 0;
}