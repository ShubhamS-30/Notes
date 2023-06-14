#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
            int a,b,c;
        cin>>a>>b>>c;
        string x,y;
        x = y = "1";
        for(int i = 0;i<a-1;i++)
        x.push_back('0');
        for(int i = 0;i<b - c;i++)
        y.push_back('1');
        for(int i = 0;i<c-1;i++)
        y.push_back('0');
        if(a == b and b == c and c == 1)
        cout<<1<<" "<<1<<endl;
        else 
        {
            cout<<x<<" "<<y<<endl;
        }
    }
    return 0;
}