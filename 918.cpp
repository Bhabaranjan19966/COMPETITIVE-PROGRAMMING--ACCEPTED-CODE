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
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl cout<<"\n"
typedef long long ll;
/*---------end of temp--------- */
using namespace std;
ll fibresult[100000];
bitset<10000000>arr;
string s="";
int n;

void fib () {
        fibresult[0] = 1;
        fibresult[1] = 1;
        arr[1]=1;
        for (int i = 2; i<=n; i++){
           fibresult[i] = fibresult[i-1] + fibresult[i-2];
       		if(fibresult[i]>10000){return;}
       		arr[fibresult[i]]=1;

       }
       
        
    }
int main()
{	

	
	cin>>n;
	arr.reset();

	fib();
	/*for(int i=1;i<=n;i++){
		trace3(i,arr[i], fibresult[i]);
		}*/
	for(int i=1;i<=n;i++){
		if(arr[i]==1){
			s+='O';
		}
		else{
			s+='o';
		}
	}

	cout<<s;

}