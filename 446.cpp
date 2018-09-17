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

int l[100000+1],r[100000+1];
int main()
{
	/*#ifndef ONLINE_JUDGE    
	    freopen("input.txt", "r", stdin);    
	    freopen("output.txt", "w", stdout);
	    freopen("details.txt", "w", stderr);
	#endif*/

	      ll n;
	      cin>>n;
	      ll arr[n];

	      for( int i= 0 ; i < n; i++){
	      	cin >> arr[i];
	      	l[i]=1;
	      	r[i] = 1;
	      }
	      for( int i = 1 ; i<n ;i++) {
	      	if( arr [ i-1] < arr[i] ){
	      		l[i] = l[i-1]+1;
	      	}
	      }
	      for( int i = n-2 ; i > -1 ;i--) {
	      	if( arr [ i] < arr[i+1] ){
	      		r[i] = r[i+1]+1;
	      	}
	      }
	      
	      int res = -500;
	     
	      for( int i = 0 ; i< n ;i++){
	      	if( i > 0 and arr[i-1]+1 < arr[i+1] ) {
	      		res = max (res , l[i-1]+ r[i+1]+1);
	      	}
	      	else res = max( res , l[i] + r[i]);
	      }
	      
	      if(res > n ) {
	      	res = n;
	      }
	      cout<<res;

} 