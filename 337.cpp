#include<cstdio>
using namespace std;
int gcd(int a,int b)
{
    return ((b==0)?  a : gcd(b,a%b));
}
int main()
{
    int a,b,c,d,x,y;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((double)((double)a/b)<=(double)((double)c/d))
    {
         x=(b*c)-(a*d);
         y=b*c;

    }
    else
    {
        x=(a*d)-(b*c);
        y=(a*d);

    }
    printf("%d/%d",x/gcd(x,y),y/gcd(x,y));
}
