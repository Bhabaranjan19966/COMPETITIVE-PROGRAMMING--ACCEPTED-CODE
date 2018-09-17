#include<bits/stdc++.h>
using namespace std;
long long int arr[1002];
int main()
{
    long long int n,l,d=0;
    float f=0,mx,m=0;
    bool val=false;
    cin>>n>>l;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);mx=0;
    for(int i=1;i<n;i++)
    {
        m=arr[i]-arr[i-1];
        m/=2;
        if(mx<m){mx=m;}
    }
    m=(arr[0]>(l-arr[n-1]))?arr[0]:(l-arr[n-1]);
    mx=(m>mx)?m:mx;
    if(mx)
    {
        printf("%.9f",mx);
    }
    else
        {
            printf("%.9f",0.5);
        }
        return 0;
}
