#include<bits/stdc++.h>
using namespace std;
int a[6][6];
int main()
{
    int n,x,y,cnt=0,j,k,l,i;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        a[x][y]=1;
        a[y][x]=1;
    }
    for(i=1;i<5;i++)
    {
        for(j=1;j+1<6;j++)
        {
            for(k=j+1;k<6;k++)
            {
                if(a[i][k]==a[i][j]&&i!=j&&i!=k)
                {
                    if(a[k][j]==a[i][k]){cout<<"WIN";return 0;

                    }
                }
            }
        }
    }
    cout<<"FAIL";return 0;

}
