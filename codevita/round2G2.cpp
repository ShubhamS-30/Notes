#include<bits/stdc++.h>
using namespace std;
int main()
{
  	vector<int> price,value;
	int n,nwk;
  	cin>>n;
    price.resize(n);
    value.resize(n);

    for(int i = 0;i<n;i++)
    cin>>price[i];

    for(int j = 0;j<n;j++)
    cin>>value[j];

    int budget;
    cin>>budget;

    nwk = ceil(n/5);
  	int temp,valsum,ans;
    ans = -1;
    for(int i = 0;i<nwk;i++)
    {
        temp = budget;
        temp -= price[i];
        valsum += value[i];
        
        if(temp <= 0)
            continue;
      
        for(int bat1 = nwk + (1 - nwk%2);bat1<n;bat1+=2)
        {
            temp -= price[bat1];
            valsum += value[bat1];
        
            if(temp > 0)
            {
                or(int bat2 = nwk + (1 - nwk%2);bat1<n;bat1+=2)
            }
        }
    }
  	return 0;
}