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
		    string s;
		    cin>>s;
		    string res= "" ;
		    res += s[0];
		    ll counter=1;
		  	for( int i = 1; i < s.length() ; i++ ) {

		  		if ( s[i] == res[res.length()-1] && counter == 1 ) {  
		  			counter=2;
		  			res+=s[i];
		  		}
		  		else{
		  			if( s[i] != res[ res.length() - 1 ] ) {
		  				res+=s[i];
		  				counter=1;
		  			}
		  		}

		  	}
		  	
		  	if( res.length() >= 4) {
		  		string fin="";
		  		fin+=res[0];
		  		counter =1;
		  		for ( int i=1; i+2 < res.length(); i++) {

		  			if(res[i-1]==res[i] )
		  			{
		  				if(res[i+1]==res[i+2]){
		  					res[i+1]='0';
		  				}
		  			}
		  			
		  		}
		  		
		  	}
		  	for(int i=0 ;i < res.length( ) ;i++) {
		  		if(res[i] != '0') {
		  			cout<<res[i];
		  		}
		  	}return 0;


}