#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        if(t.length()>s.length())
        swap(s,t);
        int fl = 0;
        int ptr = 0;
        if(s.length()%t.length() != 0)
        fl = -1;
        if(fl == 0)
        {
            for(int i = 0;i<s.length();i++)
           {
            if(s[i] == t[ptr])
            ptr++;
            else
            {
                fl = -1;
                break;
            }
            if(ptr == t.length())
            ptr = 0;
           }
        }
        if(fl == -1)
        {
            string k1;
            k1 = s;
            fl = 0;
            ptr = 0;
            int ptr1 = 0;
            int x = 0;
            while(true)
            {
                // cout<<ptr1<<" "<<ptr<<endl;
                if(s[ptr1]!=t[ptr] or x>=500)
                {
                    fl = -1;
                    break;
                }
                else if(s[ptr1] == t[ptr])
                {
                    ptr1++;
                    ptr++;
                }
                if(ptr == t.length())
                {
                    if(ptr1 == s.length())
                    break;
                    else
                    {
                        ptr = 0;
                    }
                }
                else if(ptr1 == s.length())
                {
                    ptr1 = 0;
                    x++;
                }
            }
            if(fl == -1)
            {
                cout<<-1<<endl;
            }
            else
            {
                for(int i = 0;i<x;i++)
                s+=k1;
                cout<<s<<endl;
            }
            
        }
        else
        cout<<s<<endl;
    }
    return 0;
}