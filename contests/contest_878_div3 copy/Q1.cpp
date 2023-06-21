#include<bits/stdc++.h>
using namespace std;
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
        string ans = "";
        char c;
        int fl = 0;
        for(int i = 0;i<s.length();i++)
        {
            if(fl == 0)
            {
                c = s[i];
                ans.push_back(c);
                fl = 1;
            }
            else if(fl == 1 and s[i] == c)
            {
                fl = 0;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}