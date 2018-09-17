#include<bits/stdc++.h>
#define lli long long int
using namespace std;
lli fact(lli b)
{
	lli p=1;
	while(b>0)
	{
		p*=b;
		b--;
	}
	return p;
}
int main()
{
	lli a,b,d,au,bu,diff,p,i;
	scanf("%lld %lld",&a,&b);
	a++;
	diff=b-a;
	au=a%10;
	bu=b%10;
	if(a==1 || b==0)
	{
		if(a==1 && b==0)
		{
			printf("1\n");
		}
		else if(a==1 && b<5)
		{
			p=fact(b);
			d=p%10;
			printf("%lld\n",d);
		}
		else
		{
			printf("0\n");
		}
	}
	else if(b==(a-1))
	{
		printf("1\n");
	}
	else if(a==b)
	{
		d=b%10;
		printf("%lld\n",d);
	}
	else if((((au>=1 && au<=4)&&(bu>=1 && bu<=4)) || ((au>=6 && au<=9)&&(bu>=6 && bu<=9))) && (diff<=3))
	{
		p=1;
		for(i=bu;i>=au;i--)
		{
			p*=i;
		}
		d=p%10;
		printf("%lld\n",d);
	}
	else
	{
		printf("0\n");
	}
	return 0;
}
