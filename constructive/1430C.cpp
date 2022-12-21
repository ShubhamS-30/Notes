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
        cout<<2<<endl;
        int avg = 0;
        for(int i = n;i>1;i--)
        {
            if(i == n)
            {
                cout<<i<<" "<<i-1<<endl;
                avg = round(float((i+i-1))/2);
            }
            else
            {
                cout<<avg<<" "<<i-1<<endl;
                avg = round(float((avg+i-1))/2);
            }
        }
    }
    return 0;
}