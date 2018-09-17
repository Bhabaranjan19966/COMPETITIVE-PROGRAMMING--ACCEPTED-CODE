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
	    double ans;
	    int  h , m;
	    int hungry, hungry_inc , cost , hunger_dec ;
	    
	    cin>> h >>m >> hungry >> hungry_inc >> cost >> hunger_dec;
	    int total;
	    total = (h*60)+m;
	    int bar= (20*60)+0;

	    double temp_;

	    temp_ = (ceil( (double)hungry / hunger_dec)* cost);
	    if( bar >= total) {
	    	int diff = bar - total;
	    	hungry += (diff* hungry_inc);
	    	
	    	ans = (ceil( (double)hungry / hunger_dec)* cost);
	    	ans *= .8 ;
	    	//trace2(temp_, ans);
	    	cout<< min (temp_ , ans);return 0;


	    }

	    else {
	    	ans = (ceil((double)hungry / hunger_dec)* cost);
	    	ans *= .8;
	    	cout<< ans;
	    }
}