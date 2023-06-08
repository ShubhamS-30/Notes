#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    string s;
    cin>>s;
    queue<char> q;
    unordered_map<char,int> m;
    m['A'] = 1;
    m['O'] = 1;
    m['Y'] = 1;
    m['E'] = 1;
    m['U'] = 1;
    m['I'] = 1;
    m['a'] = 1;
    m['o'] = 1;
    m['y'] = 1;
    m['e'] = 1;
    m['u'] = 1;
    m['i'] = 1;
    char c;
    for(int i = 0;i<s.length();i++)
    {
        if(m[s[i]] == 1)
        continue;
        else if(s[i]>='a' and s[i]<='z')
        {
            q.push('.');
            q.push(s[i]);
        }
        else if(s[i]>='A' and s[i]<='Z')
        {
            c = char(int(s[i])+32);
            q.push('.');
            q.push(c);
        }
    }
    string ans;
    while(q.size())
    {
        ans.push_back(q.front());
        q.pop();
    }
    cout<<ans<<endl;
    return 0;
}