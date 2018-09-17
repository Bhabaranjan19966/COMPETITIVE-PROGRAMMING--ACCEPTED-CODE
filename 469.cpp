#include<cstdio>
int main()
{
    int p,q,l,r,ans=0;
    bool val;
    scanf("%d%d%d%d",&p,&q,&l,&r);
    int z[2][p],x[2][q];
    for(int i=0;i<p;i++)
    {
        scanf("%d%d",&z[0][i],&z[1][i]);
    }
    for(int i=0;i<q;i++)
    {
        scanf("%d%d",&x[0][i],&x[1][i]);
    }
    for(int i=l;i<=r;i++)
    {
        val=true;
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<p;k++)
            {
                if(x[1][j]+i<z[0][k])
                {
                    continue;
                }
                else if(x[0][j]+i>z[1][k])
                {
                    continue;
                }
                else
                {
                    ans++;
                    val=false;
                    break;
                }
            }
            if(!val){break;}
        }
    }
    printf("%d",ans);
}

