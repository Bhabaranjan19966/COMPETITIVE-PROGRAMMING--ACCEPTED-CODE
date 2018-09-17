#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int rr=0,rb=0,br=0,bb=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0&&s[i]!='r')
        {
            rb++;
        }
        if(i%2==1&&s[i]!='b')
        {
            rr++;
        }
    }
    for(int i=0;i<n;i++)
    {
        if(i%2==0&&s[i]!='b')
        {
            br++;
        }
        if(i%2==1&&s[i]!='r')
        {
            bb++;
        }
    }
    cout<<min(max(rb,rr),max(br,bb));


}
