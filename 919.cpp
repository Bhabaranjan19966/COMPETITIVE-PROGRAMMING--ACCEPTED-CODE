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
		opt;

	   int n,k, m;

	   cin >>n >>m >> k ;
	   char arr[n][m];
	   ll row_mask=0,counter=0, ans_row = 0 , ans_col = 0;
	   if(n==1 && m==1 && k==1) {
	   	char p;
	   	cin>>p;
	   	if(p == '*'){
	   		cout<<0;return 0;
	   	}
	   	else{
	   		cout<<1; return 0;
	   }
	}

	   
	   for ( int i =0; i < n ; i++){
	   	
	   	for( int j=0; j < m; j++){
	   		
	   		cin>> arr [ i ] [ j ];

	   		if( arr[ i ][ j ] == '*') {
	   			counter =0 ;
	   		}
	   		
	   		else{
	   			counter ++;
	   		}
	   		
	   		if( counter >= k ) ans_row +=  1;
	   	
	   	}
	   	
	   	counter =0;
	   }
	   
	   counter = 0;


	   
	   for ( int i =0; i < m ; i++){
	   	for( int j=0; j < n; j++){
	   		
	   		if( arr[ j ][ i ] == '*') { 
	   			counter =0 ;
	   		}
	   		else{
	   			counter ++;
	   		}
	   		if( counter >= k ) ans_col += 1;

	   	}
	   	counter = 0;
	   }

	   
	   	
	   
	   if(k==1)cout<< max (ans_col , ans_row);
	   else if( n== 1)
	   {
	   	cout<< ans_row;
	   }
	   else if ( m == 1) {
	   	cout << ans_col;
	   }
	   else {
	   	cout << ans_row+ans_col;
	   }


}