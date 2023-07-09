#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
double intercept(double x1,double y1,double x2,double y2,double next_base)
{
    double slope = (y2 - y1)/(x2 - x1);
    double c = y1 - slope*x1;
    double inter = (next_base-c)/slope;
    return inter;
}
int main()
{
    int t;
    cin>>t;
    // t = 1;
    while(t--)
    {
        double n,d,h;
        cin>>n>>d>>h;
        vector<double> v(n,0);
        for(int i = 0;i<n;i++)
        cin>>v[i];
        sort(v.begin(),v.end());
        double ans = 0;
        double top;
        double k;
        double d1 = d / double(2);
        double ar1;
        for(int i = 0;i<n-1;i++)
        {
            top = v[i]+h;
            if(top>v[i+1])
            {
                k = intercept(d1,v[i],0,v[i]+h,v[i+1]);
                // cout<<k<<" int "<<top<<" "<<v[i]<<endl;
                ar1 = k*(top - v[i+1]);
                // cout<<ar1<<" ar "<<(d1)*(h) - ar1<<endl;
                ans += ((d1)*(h) - ar1); 
            }
            else
            ans += (d1)*h;
            // cout<<ans<<" "<<v[i]<<endl;
        }
        ans += d1*h;
        cout << setprecision (15) << ans<<endl;
        // cout<<k<<endl;
    }
    return 0;
}