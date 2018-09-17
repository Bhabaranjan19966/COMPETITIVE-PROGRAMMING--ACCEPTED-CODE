#include<cstdio>
#include<cstdlib>
int main()
{
    int n,k,m=0,ans=0,temp=0,ind=0;
    scanf("%d%d",&n,&k);
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=1;i<=k;i++)
    {
        ans=0;
        temp=i;
        for(int j=1;j<=n/k;j++)
        {
            ans+=arr[temp%(n+1)];
            temp+=k;
        }
        if(!m||m>ans)
        {
            m=ans;
            ind=i;
        }
    }
    printf("%d",ind);
}
