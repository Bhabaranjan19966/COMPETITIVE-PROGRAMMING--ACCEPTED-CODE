#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    float pi=3.1415926536,ans=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n%2){
    ans+=(pi*arr[0]*arr[0]);
    for(int i=2;i<n;i+=2)
    {
        ans+=((pi*arr[i]*arr[i])-(pi*arr[i-1]*arr[i-1]));

    }
    printf("%.6f",ans);return 0;}
    else
    {
        for(int i=1;i<n;i+=2)
        {
            ans+=((pi*arr[i]*arr[i])-(pi*arr[i-1]*arr[i-1]));
        }
        printf("%.6f",ans);return 0;
    }
}
