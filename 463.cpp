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
bool val[2000][2000];
int n;
void dfs( int a , int b) {

		if( val [a] [b] ){
			return ;
		}
		if(a > -1 && a < n && b > -1 && b < n ) {
			val [ a] [b] =1;
			dfs( a + 1 ,b+1);
			dfs( a - 1 ,b-1);
			dfs( a - 1 ,b+1);
			dfs( a + 1 ,b-1);

		}
		else {
			return ;
		}
}
int main()
{
	/*#ifndef ONLINE_JUDGE    
	    freopen("input.txt", "r", stdin);    
	    freopen("output.txt", "w", stdout);
	    freopen("details.txt", "w", stderr);
	#endif*/

	    ios_base::sync_with_stdio( false );

	    
	    cin>>n;

	    ll arr[n][n];
	    ll l_r[n][n];
	    ll r_l [n][n];
	    
	    for( int i=0 ;i < n ; i++) {
	    	for( int j = 0 ; j <n ; j++ ){ 
	    		cin>>arr[i][j];
	    	}

	    }

	    int i=0;
	    ll ans=0;
	    for( int j = 0  ; j< n ; j++ ){

	    	int cp= j;
	    	i=0;
	    	ans =0;
	    	while( i < n && j < n){
	    		ans += arr[i][j];
	    		i++ ; j++;
	    	}

	    	j=cp;
	    	i=0; 

	    	while( i < n && j < n) {
	    		l_r[i][j]=  ans;
	    		i++; j++;
	    	}
	    	j=cp;
	    }

	    int j =0 ;

	    for( int i=1;  i < n; i++) {
	    	ans = 0;
	    	int cp =i;
	    	j=0;
	    	while( i < n && j < n) {
	    		ans += arr[i][j];
	    		i++; j++;
	    	}
	    	i=cp;
	    	j=0;

	    	while( i < n && j< n) {
	    		l_r[i][j] = ans;
	    		i++; j++;
	    	}
	    	i=cp;
	    }
	   

	    for( int j = 0  ; j< n ; j++ ){

	    	int cp= j;
	    	i=0;
	    	ans =0;
	    	while( i < n && j > -1){
	    		ans += arr[i][j];
	    		i++; j--;
	    	}

	    	j=cp;
	    	i=0; 

	    	while( i < n && j > -1) {
	    		r_l[i][j]=  ans;
	    		i++; j--;
	    	}
	    	j=cp;
	    }	

	    

	    for( int i=1;  i < n; i++) {
	    	ans = 0;
	    	int cp =i;
	    	j=n-1;
	    	while( i < n && j > -1) {
	    		ans += arr[i][j];
	    		i++; j--;
	    	}
	    	i=cp;
	    	j=n-1;

	    	while( i < n && j> -1) {
	    		r_l[i][j] = ans;
	    		i++; j--;
	    	}
	    	i=cp;
	    }

	    ll mx=-200,mx2=-200,cc=mx,x1,x2,y1,y2;
	    
	    for( int i =0  ;  i  < n ; i++)	     {
	    	for( int j=0 ; j < n ; j++ ){
	    		cc=mx;
	    		mx = max ( mx , l_r[i][j]+ r_l [i][j]- arr[i][j]);
	    		if(mx!=cc) {
	    			x1=i; y1=j;
	    		}
	    	}
	    }
	    dfs(x1,y1);
	    for( int i =0  ;  i  < n ; i++) {
	    	
	    	for( int j=0 ; j < n ; j++ ) {
	    	
	    		if( !val[i][j] ){
	    		
	    		cc=mx2;
	    		
	    		mx2 = max ( mx2 , l_r[i][j]+ r_l [i][j]- arr[i][j]);	    		
	    		if(mx2!=cc) {
	    			
	    			x2=i; y2=j;
	    			
	    			}
	    		}
	    	}
	    }
	    

	    cout<<mx+mx2; nl;
	    cout<<x1+1<<" "<<y1+1<<" "<<x2+1<<" "<<y2+1;

}