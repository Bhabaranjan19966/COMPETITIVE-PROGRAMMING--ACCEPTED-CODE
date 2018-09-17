#include<iostream>
#include<cstdio>
using namespace std;
int col[100001];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int arr[m][3];
    for(int i=0;i<m;i++)
    {
        scanf("%d%d%d",&arr[i][0],&arr[i][1],&arr[i][2]);
    }
    col[arr[0][0]]=1;col[arr[0][1]]=2;col[arr[0][2]]=3;
    for(int i=1;i<m;i++)
    {
        if(!(col[arr[i][0]]+col[arr[i][1]]+col[arr[i][2]]))
        {
            col[arr[i][0]]=1;col[arr[i][1]]=2;col[arr[i][2]]=3;
        }
        else
        {
            int x,y,c=0,d;
             d=col[arr[i][0]]+col[arr[i][1]]+col[arr[i][2]];
            if(d==1){x=2,y=3;}
            else if(d==2){x=1,y=3;}
            else{x=1;y=2;}
                for(int j=0;j<3;j++)
                {
                    if(!col[arr[i][j]]&&!c)
                    {
                        col[arr[i][j]]=x;
                        c++;
                    }
                    if(c&&!col[arr[i][j]]){col[arr[i][j]]=y;}
                }
        }
    }
    for(int i=1;i<=n;i++)
    {
        printf("%d ",col[i]);
    }
}
