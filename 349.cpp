#include <iostream>
using namespace std;
int main()
{
	typedef long long ll;
	ll a[10]={0};
	ll v;
	cin>>v;
	for (int i=1; i<=9; i++) cin>>a[i];
	ll mi=-1,indmi=-1;
	for (int i=1; i<=9; i++)
	if(mi>a[i] or mi==-1)
	{
		mi=a[i];
		indmi=i;
	}
	string ans;
	ll len=v/mi;
	ll now=v;
	for (int i=1; i<=len; i++)
	{
		for (int j=9; j>=1; j--) if(now-a[j]-(len-i)*mi>=0)
		{
			ans+=j+'0';
			now-=a[j];
			break;
		}
	}
	if(ans.size()==0) cout<<-1; else
	cout<<ans;
}
