#include<bits/stdc++.h>
#define opt ios_base::sync_with_stdio(0)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl cout<<"\n"
typedef long long ll;
/*---------end of temp--------- */
using namespace std;

int main()
{
	opt;
	ll n,m;
	cin>>n>>m;
	ll k=0;
	cout<< 100003 <<" "<<100003<<"\n";
	for(ll i=1 ;i<=n-1 ;i++){
		if(i!=n-1)cout<< i<<" "<<i+1<<" "<<1<<"\n",k++;
		else cout<< i<<" "<<i+1<<" "<<100003-((n-2)*1)<<"\n",k++;
	}
	m=m-k;
	if(m>0)
	for(ll i=1; i<=n-2;i++){
		for(ll j=i+2;j<=n;j++){
			cout<<i<<" "<<j<<" "<<10000000<<"\n";m--;
			if(!m){
				return 0;
			}
		}
	}

}
