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
int arr[26];
int main()
{
		/*#ifndef ONLINE_JUDGE    
		    freopen("input.txt", "r", stdin);    
		    freopen("output.txt", "w", stdout);
		    freopen("details.txt", "w", stderr);
		#endif*/
		    opt;

	    int n,k;
	    cin>>n>>k;
	    
	    string s;
	    cin>>s;
	    int coutn=0;
	    char st='z',en='a';
	    
	    memset( arr , 0 , sizeof arr );

	    map< char , int >mp;
	    
	    for(int i = 'a' ; i<= 'z'  ; i++) {
	    	mp[s[i]]=0;
	    }

	    

	    for( int i=0 ; i < s.length( ) ; i++ ) {
	    	mp[s[i]]=1;
	    	st = min( st , s[i]) ;
	    	en = max ( en , s[i] );
	    }

	    if( n ==  k) {

	    	bool val = 0;
	    	ll index = s.length() -1;
	    	//trace2(st,en);
	    	while ( !val ) {

	    		if(s[ index ] >= en ){
	    			s[ index ] = st;
	    			index -- ;

	    		}
	    		else {

	    			char c =  s[ index ];
	    			
	    			for( char d = c+1 ; d <= 'z' ; d++) {

	    				if( mp [d] ){
	    					s[ index ] = d; val =1;break;
	    				}
	    			}
	    			cout<< s; return 0;
	    		}
	    	}
	    }

	    if( n >  k) {

	    	bool val = 0;
	    	ll index = k-1;
	    	
	    	while ( !val ) {
	    		
	    		if(s[ index ] >= en ){
	    			
	    			s[ index ] = st;
	    			index -- ;
	    			//trace3( st , en , index );
	    		}
	    			

	    		else {

	    			char c =  s[ index ];
	    			
	    			for( char d = c+1 ; d <= 'z' ; d++) {

	    				if( mp [d] ){
	    					
	    					s[ index ] = d; val=1; break;

	    				}
	    			}	
	    			
	    			
	    		}		
	    		
	    	}
	    	for( int  i =0 ; i< k ;i++) {
	    				cout<< s[i];
	    			}
	    			
	    			return 0;
	    }
	    
	    cout<<s;
	    k -= s.length();
	    for( int i =0 ; i < k ; i++) {
	    	cout<<st;
	    }
	    return 0;

}