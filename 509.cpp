#include<cstdio>
#include<cstdlib>
int ak[101];
int main()
{
    int n,k,t=0,p=-1;
    scanf("%d%d",&n,&k);
    int arr[n],ck[k+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(!t||t>arr[i]){t=arr[i];p=i;}
    }
    for(int i=1;i<=k;i++)
    {
        ak[i]=arr[p]/k;
    }
    for(int i=1;i<=arr[p]%k;i++)
    {
        ak[i]+=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
        {
            ck[j]=arr[i]/k;
        }
        for(int j=1;j<=arr[i]%k;j++)
        {
            ck[j]+=1;
        }
        for(int j=1;j<=k;j++)
        {
            if(abs(ak[j]-ck[j])>1)
            {
                printf("NO");return 0;
            }
        }
    }
    printf("YES\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<arr[i]/k;j++)
        {
            for(int m=1;m<=k;m++)
            {
                printf("%d ",m);
            }
        }
        for(int j=1;j<=arr[i]%k;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
