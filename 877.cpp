#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n;
	cin>>n;
	if(n==2){
		cout<<3<<"\n2 1 2";return 0;
	}
	else if(n==3){
		cout<<4<<"\n2 1 3 2";return 0;
	}
	else{
		ll e,k;
		if(n%2){
			cout<<3*((n-1)/2)+1<<"\n";
		}
		else{
			cout<<3*((n-1)/2)+3<<"\n";	
		}
		for(int i=2;i<n;i+=2){
			cout<<i<<" ";
		}
		if(n%2){
			cout<<n<<" ";
			e=n-2; 
		}
		else{
			cout<<n-1<<" "<<n<<" "<<n-1<<" ";
			e=n-3;
		} 
		for(int i=1;i<=e;i+=2){
			cout<<i<<" ";
		}
		for(int i=e+1;i>0;i-=2){
			cout<<i<<" ";
		}


	}
}