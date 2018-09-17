#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    int64_t a,d,i,b;
    int t;
    scanf("%I64d",&a);
    b=sqrt((double)a);
    d=b;t=0;
    for(i=max(1LL,b-10000);i<=b;i++)
    {
        if(!(a%i))
        {
            d=i;t=0;
            if(d>9){
            while(d)
            {
             t+=d%10;
             d/=10;
            }}
            else{t=i;}
            if((i*(i+t))==a){printf("%I64d",i); return 0;}
        }
    }

    printf("-1");
}
