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


int main() 
{

	/*#ifndef ONLINE_JUDGE    
	    freopen("input.txt", "r", stdin);    
	    freopen("output.txt", "w", stdout);
	    freopen("details.txt", "w", stderr);
	#endif*/
	opt;
	    
	    
	   ll n , m ,k;
	    cin>>n>> m >>k;	    
	    ll dp[n+5][n+5];
	   memset( dp , -1 , sizeof dp );

	    ll p[n+1] , x;
	    p[0] = 0;

	    for(int i = 1; i<= n; i++ ){
	    	cin>> x;
	    	p[i]= p[i-1] +x;
	    }

	    ll sum=0 ;

	    
	    for(int i = m ; i <= n ; i++) {

	    	dp[i][1] =  max ( dp[i-1][1] , p[i]-p[i-m] );	    	
	    }

	    for( int i=2*m ; i <= n ; i++ ) {
	    	for( int j = 2; j <= k ; j++) {
	    		if(dp[i-m][j-1] != -1) {
	    			dp[i][j] = max( dp[i-1] [j] , dp[i-m][j-1] + ( p[i] - p[i-m]) );
	    		}
	    	}
	    }

	    cout << dp[n][k];
}