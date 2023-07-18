#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
void rec(string &s,int id)
{
    if(id == s.length())
    return ;
    else if(s[id] == '?')
    {

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.length() == 1)
        {
            if(s[0] == '?')
            s[0] = '1';
            cout<<s<<endl;
        }
        else
        {
            int l,p1,p2;
            l = 0;
            while(l<s.length())
            {
                if(s[l] == '?')
                {
                    p1 = l-1;
                    p2 = -1;
                    while(l<s.length() and s[l] == '?')
                    {
                        l++;
                    }
                    p2 = l;
                    if(p1<0)
                    {
                        if(p2<s.length())
                        {
                            for(int i = 0;i<p2;i++)
                            s[i] = s[p2];
                        }
                        else
                        {
                            for(int i = 0;i<p2;i++)
                            s[i] = '1';
                        }
                    }
                    else if(p2 == s.length())
                    {
                        if(p1>=0)
                        {
                            for(int i = p1;i<p2;i++)
                            s[i] = s[p1];
                        }
                        else
                        {
                            for(int i = 0;i<p2;i++)
                            s[i] = '1';
                        }
                    }
                    else{
                        for(int i = p1;i<p2;i++)
                            s[i] = s[p1];
                    }
                }
                l++;
            }
            cout<<s<<endl;
        }
    }
    return 0;
}