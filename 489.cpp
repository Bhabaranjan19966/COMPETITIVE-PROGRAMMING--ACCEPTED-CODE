#include<iostream>
using namespace std;
int main()
{
	int m,s,t,y,i;
	cin>>m>>s;
	int a[m];
	if(s>9*m||(m>1&&s==0))
	{
		cout<<-1<<' '<<-1;
		return 0;
	}
	if(m==1)
	{cout<<s<<' '<<s;return 0;
	}
	t=s-1;
	for(i=0;i<=m-2;i++)
	{
		a[i]=min(9,t);
		t=t-min(9,t);
	}
	a[m-1]=t+1;
	for(i=m-1;i>=0;i--)
	cout<<a[i];
	cout<<' ';
	for(i=1;i<=m;i++)
	{
		cout<<min(9,s);
		s=s-min(9,s);
	}
}
