#include<stdio.h>

int n,t,s,r,l=1,a[100005],i;

int main()
{
	scanf("%d%d",&n,&t);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		s+=a[i];
		while(s>t)
			s-=a[l++];
		if(r<i-l+1)
			r=i-l+1;
	}
	printf("%d",r);
	return 0;
}
