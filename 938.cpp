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
#define MP make_pair
#define PB push_back
#define ff first
#define ss second
#define nl cout<<"\n"
typedef long long ll;
/*---------end of temp--------- */
using namespace std;
void p( ll arr[] , int n) {
	for(int i=0 ;i < n; i++) {
		cout<<arr[i]<<" ";
	}
	nl;
}

int main()
{
	#ifndef ONLINE_JUDGE    
	    freopen("input.txt", "r", stdin);    
	    freopen("output.txt", "w", stdout);
	    freopen("details.txt", "w", stderr);
	#endif
	    int n;
	    cin>>n;
	    ll arr[n];
	    
	    for( int i=0 ; i< n;i++) {
	    	cin>>arr[i];
	    }
	    ll a[n];
	    ll b[n];
	    ll c[n];
	    sort(arr,arr+n);
	    ll st=1,en=1000000;
	    for ( int i=0 ;i<n ; i++) { 

	    	if(i==0) a[i]=abs(st-arr[i]);
	    	else a[i]=abs( st-arr[i] ) + a[i-1];
	    	st=arr[i];
	    }
	    //p(a,n);
	    ll m=10e10;
	    for ( int i=n-1 ;i>-1 ; i--) { 

	    	if (i == n-1) b[i]=abs(en-arr[i]);
	    	else b[i]=abs(en-arr[i])+b[i+1];
	    	en=arr[i];
	    	c[i]= min(b[i],a[i]);
	    	
	    }
	    //p(b,n);
	    sort(c,c+n);
	    cout<<c[n-1];


}