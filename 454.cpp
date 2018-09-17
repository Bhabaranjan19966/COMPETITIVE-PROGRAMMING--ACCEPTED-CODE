#include<cstdio>
int main()
{
    int n,pos=-1,c=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&arr[0]);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&arr[i]);
        pos=(pos==-1&&arr[i]<arr[i-1])?i:pos;
    }
    if(pos==-1){printf("0");return 0;}
    if(pos==(n-1)&&arr[n-1]<=arr[0]){printf("1");return 0;}
    if(pos==n-1&&arr[n-1]>arr[0]){printf("-1");return 0;}
            for(int i=pos;i<n-1;i++)
            {
                if(arr[i]<=arr[0]&&arr[i]<=arr[i+1]&&arr[i+1]<=arr[0]){ c++;}
                else
                {
                    printf("-1");return 0;
                }
            }
        printf("%d",++c);
}
