#include<iostream>
#include<cstdio>
#define S scanf
#define P printf
using namespace std;
int main()
{
    int d,n;
    S("%d%d",&d,&n);
    int arr[n];
    long long int ans=0;
    for(int i=0;i<n;i++)
    {
        S("%d",&arr[i]);
        ans+=(d-arr[i]);
    }
    cout<<ans-(d-arr[n-1]);
}
