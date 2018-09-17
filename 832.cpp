#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
	ll n,k;
	cin>>n>>k;
	if((n/k)&1){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
}