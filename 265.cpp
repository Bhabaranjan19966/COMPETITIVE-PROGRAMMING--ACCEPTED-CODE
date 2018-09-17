#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main()
{
    int n;
    long long int ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ans+=arr[0]+n;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]<=arr[i+1]){ans+=(arr[i+1]-arr[i]+1);}
        else{ans+=(arr[i]-arr[i+1]+1);}
    }
    cout<<ans;
}
