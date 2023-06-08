#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    string s;
    cin>>s;
    string k = "hello";
    int ptr1;
    ptr1 = 0;
    for(int i = 0;i<s.length();i++)
    {
        if(s[i] == k[ptr1])
        ptr1++;
        if(ptr1 == 5)
        break;
    }
    if(ptr1 == 5)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;


    return 0;
}