#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    long long i,l=0,ans=1,v=s.length();
    if(v<2){cout<<"1";return 0;}
    for(i=1;i<v;i++)
    {
        if(s[i]+s[i-1]-'0'-'0'==9)
        {
            l++;
        }
        else
        {
            if(l&&!(l%2)){ans*=(l/2+1);}
            l=0;
        }
    }
    if(l&&!(l%2)){ans*=(l/2+1);}
    cout<<ans;
}
