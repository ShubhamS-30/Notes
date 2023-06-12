#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<=4)
        cout<<"Bob"<<endl;
        else
        cout<<"Alice"<<endl;
    }
    return 0;
}