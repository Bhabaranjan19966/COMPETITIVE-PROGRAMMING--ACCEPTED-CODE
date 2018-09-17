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
ll n,l, ans, mn=INT_MAX, remaining , unused;
ll arr[50];
int main()
{
	opt;
	ll n,l;
	cin>>n>>l;
	ll arr[n];

	rep(i, 0, n){
		cin>>arr[i];
	}

	rep(i, 1, n){
		arr[i]= min(arr[i], 2*arr[i-1]);
	}

	ll cur_l=l, best_ans=2e18, cur_ans=0; 
	repd(i , n-1, -1){
		ll z= cur_l / (1<<i);
		cur_ans += (z*arr[i]);
		cur_l -= (z*(1 << i ));
		best_ans = min( best_ans , cur_ans+arr[i]);

	}
	best_ans=min( cur_ans ,best_ans );
	cout<<best_ans;
}