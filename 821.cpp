#include<cstdio>
#include<algorithm>
#include<cmath>
int main()
{
    long long m,b,area=-1,k,x=0,y=0,i,j,a1=0,a2=0,a3=0,py=0,px=0;
    scanf("%lld%lld",&m,&b);
    for(j=1;j<b ;j++)
    {
                i=m*(b-j);
                k=(i+j*m-b*m);
                if(!k){
                py=(j*(j+1))/2;
                px=(i*(i+1))/2;
                a1=(py+px+(i*py)+(px*j));
                area=(area<a1)?a1 :area;
                }
                if(k<0){break;}


    }
    a2=(b*(b+1))/2;
    a3=((b*m)*(b*m+1))/2;
    a2=(a2<=a3)?a3:a2;
    area=(area<a2)? a2:area;
    printf("%lld",area);
}
