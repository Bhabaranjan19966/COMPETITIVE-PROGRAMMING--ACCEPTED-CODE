#include<cstdio>
int a1[100001];
int main()
{
	int n,a,b,o=0;
	scanf("%d%d%d",&n,&a,&b);
	for(int i=1;i<=n;++i)
		scanf("%d",a1+i);
	while(a!=b)
	{
		a=a1[a];
		++o;
		if(o>n)
		{
			puts("-1");
			return 0;
		}
	}
	printf("%d\n",o);
}
