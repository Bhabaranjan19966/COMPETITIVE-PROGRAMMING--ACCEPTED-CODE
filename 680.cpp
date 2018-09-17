#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
    int n,a,ds,de,d,ans=0,c=0;
    cin>>n>>a;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    if(a==1)
    {
        for(int i=1;i<=n;i++)
        {
            ans+=arr[i];
        }
        cout<<ans;
        exit(0);
    }
    if(a==n)
    {
        for(int i=1;i<=n;i++)
        {
            ans+=arr[i];
        }
        cout<<ans;
        exit(0);
    }
    ds=abs(a-1);
    de=abs(a-n);
    d=min(ds,de);
    c=d;
    if(de>ds)
    {
        for(int i=(a+d+1);i<=n;i++)
        {
            ans+=arr[i];
        }
    }
    if(de<ds)
    {
        for(int i=(a-d-1);i>=1;i--)
        {
            ans+=arr[i];
        }
    }
     for(int i=0;c>=1;i++)
     {
         if((arr[a+c]+arr[a-c])==2)
         {
             ans+=2;
         }
         c--;
     }
     if(arr[a]){
        ans++;
     }
    cout<<ans;
}
