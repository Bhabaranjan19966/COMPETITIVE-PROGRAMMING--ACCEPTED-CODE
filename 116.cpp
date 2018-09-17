#include<bits/stdc++.h>
using namespace std;
char arr[16][16];
int ans;
int main()
{
    int n,m;
    bool val=true;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
    {
        cin>>(arr[i]+1);
    }
    for(int i=1;i<=n;i++)
    {
    for(int j=1;j<=m;j++)
    {
        val=true;
        if(arr[i][j]=='W')
        {
            if(arr[i-1][j]=='P'&&val){ans++;arr[i-1][j]='.';val=false;}
            if(arr[i+1][j]=='P'&&val){ans++;arr[i+1][j]='.';val=false;}
            if(arr[i][j-1]=='P'&&val){ans++;arr[i][j-1]='.';val=false;}
            if(arr[i][j+1]=='P'&&val){ans++;arr[i][j+1]='.';val=false;}

        }
    }
    }
    printf("%d",ans);
}
