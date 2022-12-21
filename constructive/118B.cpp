#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int n;
    cin>>n;
    for(int line = 0;line<2*n+1;line++)
    {
        if(line<=n)
        {
            for(int space = 2*(n - line);space>0;space--)
                cout<<" ";
        }
        else
        {
            for(int space = 2*(line - n);space>0;space--)
            cout<<" ";
        }
        if(line<=n)
        {
            for(int i = 0;i<=line;i++)
            {
                if(line!=0)
                cout<<i<<" ";
                else
                cout<<0;
            }
            for(int i = line-1;i>=0;i--)
            {
                if(i!=0)
                cout<<i<<" ";
                else
                cout<<i;
            }
            
            cout<<endl;
        }
        else
        {
            for(int i = 0;i<=2*n-line;i++)
            {
                if(line<2*n)
                cout<<i<<" ";
                else
                cout<<i;
            }
            for(int i = 2*n - line - 1;i>=0;i--)
            {
                if(i!=0)
                cout<<i<<" ";
                else
                cout<<i;
            }
            cout<<endl;
        }
    }
    return 0;
}