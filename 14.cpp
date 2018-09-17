#include<cstdio>
#include<cmath>
#include<algorithm>
int main()
{
    int n,x,a,b,cs,ce;
    scanf("%d%d",&n,&x);
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        arr[i][0]=std::min(a,b);
        arr[i][1]=std::max(a,b);
    }
    cs=arr[0][0];ce=arr[0][1];
    for(int i=1;i<n;i++)
    {
        if(arr[i][1]<cs)
        {
           printf("-1");return 0;
        }
        else if(arr[i][0]>ce)
        {
           printf("-1");return 0;
        }
        else
        {
            cs=std::max(cs,arr[i][0]);
            ce=std::min(ce,arr[i][1]);
        }
    }
    if(x>=cs&&x<=ce)
    {
        printf("0");return 0;
    }
    a=abs(cs-x);
    b=abs(ce-x);
    printf("%d",std::min(a,b));
}
