#include<cstdio>
#include<iostream>
#define S scanf
#define P printf
using namespace std;
int main()
{
    int i,n,k;
    S("%d%d",&n,&k);
    int arr[n+1];
    if(k>=n){P("-1");return 0;}
    for( i=1;i<=n;i++)
    {
        arr[i]=i;
    }
    for(int i=1;i<n-k&&i<n+1;i++)
    {
        swap(arr[i],arr[i+1]);
    }
    for(int i=1;i<=n;i++)
    {
        P("%d ",arr[i]);
    }

}
