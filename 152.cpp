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
	#ifndef ONLINE_JUDGE    
	    freopen("input.txt", "r", stdin);    
	    freopen("output.txt", "w", stdout);
	    freopen("details.txt", "w", stderr);
	#endif
	    int m, n;
	    
	    cin>> n >>m;
	    string s;
	    vector<string>v;
	     int arr[m];

	    memset(arr, 0, sizeof arr);
	    
	    for(int i = 0 ; i< n; i++) {
	    	cin>> s;
	    	v.PB(s);
	    }
	    if( n == 1 ) {
	    	cout<<1;
	    	return 0;
	    }
	    int valid[26];
	    

	    for(int j=0 ; j < m ; j++){
	    	memset(valid, 0, sizeof valid);
	    	for( int  i =1 ; i< v.size(); i++) {

	    		if(v[0][j] != v[i][j] && !valid[v[i][j]-'A'])	 {
	    			valid[v[i][j]-'A'] =1;
	    			arr[j]++;
	    			//cout<<"here";
	    			}
	    		}
	    			
	    	}
		
		long long int ans=1;
		for(int i= 0  ; i< m; i++) {
			trace2(arr[i], i);
		}
		for(int i= 0  ; i< m; i++) {
			//trace1(arr[i]);
			ans = ( (ans)%1000000007 * (arr[i]+1)%1000000007 ) % 1000000007;
		}

		cout<< ans;

}