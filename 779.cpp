#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool val=true;
    string s;
    long long int k,l,z=0,r=0;
    cin>>s>>k;
    l=s.length();
    if(l<k+1)
    {
        cout<<l-1;return 0;
    }
    else
    {
        if(l==k+1)
        {
            for(int i=0;i<l;i++)
            {
                if(s[i]=='0'){z++;}
            }
            if(z==k){cout<<"0";return 0;}
            else{cout<<l-1;return 0;}
        }
    else
    {
        for(int i=l-1;i>=0;i--)
            {
                if(s[i]=='0'){z++;if(z==k){cout<<r;return 0;}}
                else{r++;}
            }
            cout<<l-1;return 0;
    }
    }
}
