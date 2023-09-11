#include<iostream>
#include<cstring>
using namespace std;
void print(char *s)
{
    int n = strlen(s);
    cout<<n<<endl;

    for(int i = 0;i<n;i++)
    cout<<s[i]<<" ";

    cout<<endl;
}
int fun(char *x,char *y,int l)
{
    int n = strlen(x);
    int m = strlen(y);

    int id = 0;
    int t,ans;
    t = ans = 0;
    for(int i = l;i<n;i++)
    {
        if(id == m)
        break;
        if(x[i] == y[id])
        t++;
        else
        {
            ans = max(t,ans);
            t = 0;
        }
        id++;
    }    
    ans = max(t,ans);
    return ans;
}
int main()
{
    char x[] = "abcdefghi";
    char y[] = "agcdefa";
    print(x);
    cout<<fun(x,y,0)<<endl;
    return 0;
}