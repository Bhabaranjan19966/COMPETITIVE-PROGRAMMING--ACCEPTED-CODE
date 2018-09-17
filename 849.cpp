#include<bits/stdc++.h>
#define lli long long int
using namespace std;
int main()
{	
	lli n,temp,i;
	scanf("%lld",&n);
	vector <lli> v(n);
	for(i=0;i<n;i++)
	{
		scanf("%lld",&v[i]);
	}
	if(n%2!=0 && v[0]%2!=0 && v[n-1]%2!=0)
	{
		printf("Yes\n");
	}
	else
	{
		printf("No\n");
	}
	return 0;
}
