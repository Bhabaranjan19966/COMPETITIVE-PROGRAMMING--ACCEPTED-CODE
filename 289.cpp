#include<cstdio>
#include<cstdlib>
int main()
{
    int n,m,d,num,mi=0,ans=0;;
    scanf("%d%d%d",&n,&m,&d);
    int arr[n*m];
    for(int i=0;i<n*m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n*m;i++)
    {
        ans=0;
        for(int j=0;j<n*m;j++)
        {
            if(!(abs(arr[i]-arr[j])%d)){ans+=(abs(arr[i]-arr[j]))/d;}
            else{printf("-1");return 0;}
        }
        if(!mi||ans<mi)
        {
            mi=ans;
        }
    }
    printf("%d",mi);return 0;
}
