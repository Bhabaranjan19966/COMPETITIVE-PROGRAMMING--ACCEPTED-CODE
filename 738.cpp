#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,r="";
    cin>>n>>s;
    for(int i=0;i<s.length();)
    {
        if(s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o')
        {
            i+=3;
            r+="***";
            for(;i<s.length()&&s[i]=='g'&&s[i+1]=='o';)
                i+=2;
        }
        else{r+=s[i++];}
    }
    for(int i=0;i<r.length();i++)
    {
        cout<<r[i];
    }
}







