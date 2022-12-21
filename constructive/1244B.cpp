#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(s[0]=='1' or s[n-1]=='1')
        cout<<2*n<<endl;
        else
        {
            int l,r;
            l = r = -1;
            for(int i = 0;i<n;i++)
            {
                if(s[i] == '1')
                {
                    l = i;
                    break;
                }
            }
            for(int i = n-1;i>=0;i--)
            {
                if(s[i] == '1')
                {
                    r = i;
                    break;
                }
            }
            if(l>-1 and r>-1)
            {
                r = 2*max(n-r,r+1);
                l = 2*max(l+1,n-l);
                cout<<max(l,r)<<endl;
            }
            else
            cout<<n<<endl;
        }
    }
    return 0;
}