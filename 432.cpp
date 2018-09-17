#include<cstdio>
int arr[100001];
int main()
{
    int n;
    scanf("%d",&n);
    int x[n],y[n],res[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        arr[x[i]]++;
        scanf("%d",&y[i]);
        res[i][0]=0;
        res[i][1]=0;
    }
    for(int i=0;i<n;i++)
    {
        res[i][0]=n-1;
        res[i][0]+=arr[y[i]];
        res[i][1]=2*(n-1)-res[i][0];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d %d\n",res[i][0],res[i][1]);
    }
}
