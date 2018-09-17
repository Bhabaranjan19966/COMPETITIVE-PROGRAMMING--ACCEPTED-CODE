#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,ans=0;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=0&&m)
        {
            ans+=arr[i];
            m--;
        }
        else
        {
            break;
        }
    }
    printf("%d",-1*ans);
}
