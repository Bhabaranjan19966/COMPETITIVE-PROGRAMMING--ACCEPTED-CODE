#include<cstdio>
int arr[1000001];
int main()
{
    int n,m,t,c=0;
    bool val;
    scanf("%d%d",&n,&m);
    int ar[m];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        arr[t]++;
    }
    for(int i=0;i<m;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<m;i++)
    {
        if(arr[ar[i]]==1)
        {
            arr[ar[i]]=0;
            ar[i]=0;
        }
    }
    for(int i=0;i<1000001;i++)
    {
        val=true;
        if(arr[i])
        {
            val=false;
            for(int j=0;j<m;j++)
            {
                if(ar[j]>i)
                {
                    val=true;arr[i]=0;ar[j]=0;break;
                }
            }
        }
        if(!val){c++;}
    }
   printf("%d",c);
}
