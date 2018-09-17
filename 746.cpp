#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,ans=0;
    cin>>a>>b>>c;
    for(int i=a;i>=1;i--)
    {
        if((2*i)<=b&&(4*i)<=c)
        {
            ans=i+(2*i)+(4*i);
            break;
        }
    }
    cout<<ans;
}
