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

	    int n;
	    cin>>n;
	    int arr[n];
	    string b;
	    for(int i =0 ;i <n ;i++) {
	    	cin>>arr[i];
	    }
	    cin>>b;
	    
	    std::vector<int> v;
	    bool val = false, exist =0;;
	    int mn = 1000000, mx = -100;
	    for(int i=0; i < b.length();i++) {
	    	
	    	if ( b[i]== '1') {
	    		
	    		mn = min( arr[i] , mn);
	    		mn = min( arr[i+1] , mn);
	    		
	    		mx = max( arr[i] , mx);
	    		mx = max( arr[i+1] , mx);
	    		
	    		if( b[i+1] == '0' ||  i+1 == b.length() ) { 
	    			
	    			v.PB( mn );
	    			v.PB( mx );mn = 1000000, mx = -100;i++;

	    		}

	    		

	    	}
	    	else {

	    		v.PB(arr[i]);mn = 1000000, mx = -100;

	    	}

	    }

	    if(b[b.length()-1]=='0') v.PB(arr[n-1]);
	    
	    

	    for(int i=0 ;i+1<v .size() ; i++){
	    	if(v[i]>v[i+1]){
	    		cout<<"NO";
	    		return 0;
	    	}

	    }
	    cout<<"YES";
}