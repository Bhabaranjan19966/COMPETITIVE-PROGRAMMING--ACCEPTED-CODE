#include<bits/stdc++.h>
using namespace std;
const int MAX=1e2+9;
int f[MAX],n,m,ans,v,u;
int root(int v){return f[v]<0?v: root(f[v]);}
int main()
{
	memset(f,-1,sizeof f);
	cin>>n>>m;
	while (m--)
	{
		cin>>v>>u;
		if ((v=root(v))==(u=root(u)) && (-f[v])%2) ans++;
		else f[v]+=f[u],f[u]=v;
	}
	if ((n-ans)%2) ans++;
	cout<<ans;
}
