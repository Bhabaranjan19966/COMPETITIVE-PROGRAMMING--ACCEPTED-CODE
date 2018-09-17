#include<cstdio>
using namespace std;
bool arr[1001][1001];
 int m,n,first=-1,last=-1,cnt=0,ans=0;
int main()
{

    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            scanf("%d",&arr[i][j]);
    }
    for(int i=0;i<n;i++)
    {
        first=-1;last=-1;cnt=0;
        for(int j=0;j<m;j++)
        {
            if(arr[i][j])
                {
                    if(first==-1)
                    {
                        first=j;
                    }
                    last=j;cnt++;
                }
        }
        if(first!=-1){ans+=m-first+last+1-2*cnt;}
    }
    for(int i=0;i<m;i++)
    {
        first=-1;last=-1;cnt=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j][i])
                {
                    if(first==-1)
                    {
                        first=j;
                    }
                    last=j;cnt++;
                }
        }
        if(first!=-1){ans+=n-first+last+1-2*cnt;}
    }
    printf("%d",ans);return 0;
}
