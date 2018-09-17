#include<cstdio>
int arr[10001][1001];
int main()
{
    int n,m,a,b;
    bool val;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&a,&b);
        arr[a][b]=1;
        arr[b][a]=1;
    }
    for(int i=1;i<=n;i++)
    {
        val=true;
        for(int j=1;j<=n;j++)
        {
            if(arr[i][j])
            {
                val=false;
                break;
            }
        }
        if(val){a=i; break;}
    }
    printf("%d\n",n-1);
    for(int i=1;i<=n;i++)
    {
        if(a!=i)
        printf("%d %d\n",a,i);
    }
}
