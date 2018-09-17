#include<bits/stdc++.h>
#define opt ios_base::sync_with_stdio(0)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a;i>b;i--)
#define trace1(x)                cerr << #x << ": " << x << endl;
#define trace2(x, y)             cerr << #x << ": " << x << " | " << #y << ": " << y << endl;
#define trace3(x, y, z)          cerr << #x << ": " << x << " | " << #y << ": " << y << " | " << #z << ": " << z << endl;
#define trace4(a, b, c, d)       cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << endl;
#define trace5(a, b, c, d, e)    cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << endl;
#define trace6(a, b, c, d, e, f) cerr << #a << ": " << a << " | " << #b << ": " << b << " | " << #c << ": " << c << " | " << #d << ": " << d << " | " << #e << ": " << e << " | " << #f << ": " << f << endl;
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl cout<<"\n"
typedef long long ll;
/*---------end of temp--------- */
using namespace std;
ll cnt[100009];
vector<ll>v;
int main()
{
	ll n;
	cin>>n;
	ll arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(cnt[arr[i]]==0){
			v.pb(arr[i]);
		}
		cnt[arr[i]]++;

	}
	sort(v.begin(),v.end());
	if(n==1){
		cout<<"Conan";return 0;
	}
	ll k=v.size();
	if(cnt[v[k-1]]%2){
		cout<<"Conan";return 0;
	}
	if(k==1){
		cout<<"Agasa";return 0;
	}
	for(ll i=k-1;i>-1;i--){
		if(cnt[v[i]]%2){
			cout<<"Conan"; return 0;
		}
	}
	cout<<"Agasa";
}