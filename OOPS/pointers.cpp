#include<iostream>
#include<cstring>
#include<vector>
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
string* convert(vector<string> &t)
{
    string *temp = new string;
    for(int i = 0;i<t.size();i++)
    *temp += t[i] + ',';
    temp->pop_back();
    return temp;
}
int main()
{
    char x[] = "abcdefghi";
    char y[] = "agcdefa";
    print(x);
    cout<<fun(x,y,0)<<endl;

    vector<string> t = {"abc","def"};
    string *z = convert(t);
    cout<<*z<<endl;
    return 0;
}