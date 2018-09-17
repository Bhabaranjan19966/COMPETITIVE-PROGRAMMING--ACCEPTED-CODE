#include<cstdio>
int main()
{
    int d,st;
    int m=0,mx=0;
    scanf("%d%d",&d,&st);
    int arr[d][3];
    for(int i=0;i<d;i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);
        arr[i][2]=arr[i][0];
        m+=arr[i][0];mx+=arr[i][1];
    }
    if(st<m||st>mx)
    {
        printf("NO");return 0;
    }
    st-=m;
   for(int i=0;i<d;i++)
   {
           if((arr[i][1]-arr[i][2])<=st){st-=(arr[i][1]-arr[i][2]);arr[i][2]+=(arr[i][1]-arr[i][2]);}
           else{arr[i][2]+=st;st=0;break;}

   }
    printf("YES\n");
    for(int i=0;i<d;i++)
    {
        printf("%d ",arr[i][2]);
    }
}
