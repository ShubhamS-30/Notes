#include <bits/stdc++.h>
using namespace std;
#define ll long long int
char check(string s1,string s2,string s3)
{
    char ans = '.';
    if(s1[0] == s1[1] and s1[1] == s1[2])
    {
        ans = s1[0];
        // cout<<"F"<<endl;
        return ans;
    }
    if(s2[0] == s2[1] and s2[1] == s2[2])
    {
        ans = s2[0];
        // cout<<"E"<<endl;

        return ans;
    }
    if(s3[0] == s3[1] and s3[1] == s3[2])
    {
        ans = s3[0];
        // cout<<"D"<<endl;

        return ans;
    }
    for(int i = 0;i<3;i++)
    {
        if(s1[i] == s2[i] and s2[i] == s3[i])
        {
            ans = s1[i];
        // cout<<"C"<<endl;

            return ans;
        }
    }
    if(s1[0] == s2[1] and s2[1] == s3[2])
    {
        // cout<<"B"<<endl;
        ans = s1[0];
        return ans;
    }
    if(s1[2] == s2[1] and s2[1] == s3[0])
    {
        ans = s1[2];
        // cout<<"A"<<endl;
        return ans;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2,s3;
        cin>>s1>>s2>>s3;
        char ans = check(s1,s2,s3);
        if(ans == '.')
        cout<<"DRAW"<<endl;
        else
        cout<<ans<<endl;
    }
    return 0;
}