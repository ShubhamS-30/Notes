#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        long long x,y,x1,y1;
        cin>>x>>y;
        cin>>x1>>y1;
        if(x1 == y1 or x == y)
        cout<<"YES"<<endl;
        else
        {
           if(x < y and y1 < x1)
           {
            cout<<"NO"<<endl;
           }
           else if(y<x and y1 > x1)
            cout<<"NO"<<endl;
           else
            cout<<"YES"<<endl;
        }
    }
    return 0;
}