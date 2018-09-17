#include<iostream>
#include<cmath>
#include<algorithm>
typedef long long ll;
using namespace std;
int main()
{
    int n,b,a,ans=0;
    string s;
     cin>>n;
    while(n--)
    {
    cin>>s;
    cin>>b;
    cin>>a;
    if(b>=2400&&a>b)
    {

       ans++;
    }
    }
    if(ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

}
