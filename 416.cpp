#include<cstdio>
#include<cstdlib>
int main()
{
    int m,n;
    scanf("%d%d",&n,&m);
   long long int arr[n][m],ch[m];
    long long int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%I64d",&arr[i][j]);
        }
    }
        for(int j=1;j<n;j++)
        {
            arr[j][0]+=arr[j-1][0];
        }
        for(int i=1;i<m;i++)
        {
            arr[0][i]+=arr[0][i-1];
        }
        for(int j=1;j<m;j++)
        {
           c=arr[0][j];
            for(int i=1;i<n;i++)
            {

                if(arr[i][j-1]<c)
                {
                    arr[i][j]=c+arr[i][j];
                }
                else
                {
                    arr[i][j]=(arr[i][j-1]-c)+arr[i][j]+c;
                }
                c=arr[i][j];
            }
        }
        for(int j=0;j<n;j++)
        {
            printf("%I64d ",arr[j][m-1]);
        }return 0;
}
