#include <bits/stdc++.h>
using namespace std;
#define ll long long int
string convert(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
        {
            s[i] = char(s[i] - 32);
        }
        else if (s[i] >= 'A' and s[i] <= 'Z')
        {
            s[i] = char(s[i] + 32);
        }
    }
    return s;
}
int main()
{
    string s;
    cin >> s;
    int up, l;
    up = l = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' and s[i] <= 'z')
            l++;
        else
            up++;
    }
    if (up == s.length())
    {
        s = convert(s);
    }
    else if (up == s.length()-1 and s[0]<='z' and s[0]>='a')
    {
        s = convert(s);
    }
    cout<<s<<endl;
    return 0;
}