#include<bits/stdc++.h>
using namespace std;
int main()
{
    int w,h,i,j,r,u;
    long long int ans=0;
    cin>>w>>h;
    for(i=1;i<w;i++)
    {
        for(j=1;j<h;j++)
        {
            r=abs(i-w);
            u=abs(j-h);
            ans+=(min(i,r)*min(u,j));
        }
    }
    cout<<ans;
}
