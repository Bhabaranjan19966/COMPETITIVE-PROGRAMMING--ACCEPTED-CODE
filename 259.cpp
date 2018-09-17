#include<cstdio>
int arr[3][3];
int a,b,d,p; int c=-1;
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    a=arr[1][0]+arr[1][2];
    b=arr[0][1]+arr[2][1];
    c=arr[2][0]+arr[0][2];
    for(int i=1;i<100001;i++)
    {
        if(((i+a)==(i+b))&&((i+a)==(i+c)))
        {
            p=i;
            arr[0][0]=(c+p)-(arr[0][1]+arr[0][2]);
            arr[1][1]=p;
            arr[2][2]=(c+p)-(arr[2][0]+arr[2][1]);
            if(arr[0][0]&&arr[1][1]&&arr[2][2]&&(arr[0][0]+arr[1][1]+arr[2][2]==c+p)){break;}
        }
    }
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}
