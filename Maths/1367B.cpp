#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        vector<int> v;
        int oe,eo;
        eo = oe = 0;
        for(int i = 0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
            if(i%2 and k%2==0)
            oe++;
            if(i%2==0 and k%2)
            eo++;
        }
        if(oe == eo)
        cout<<eo<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}