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
        string temp = "AB";
        unordered_map<string,int> m;
        temp[0] = s[0];
        for(int i = 1;i<n;i++)
        {
            temp[1] = s[i];
            m[temp]++;
            temp[0] = temp[1];
        }
        cout<<m.size()<<endl;
    }
    return 0;
}