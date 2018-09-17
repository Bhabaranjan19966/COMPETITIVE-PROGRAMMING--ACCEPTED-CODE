#include<bits/stdc++.h>
using  namespace std;
typedef long long ll;
ll p[500005];
int main()
{
	ll n;
	cin>>n;
	ll arr[n],s=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		s+=arr[i];
	}
	if(s%3){
		cout<<0;return 0;
	}
	ll temp=0,ans=0;
	for(int i=n-1;i>=0;i--){
		temp+=arr[i];
		if(temp==(s/3)){
			p[i]++;
		}
	}
	for(int i=n-2;i>0;i--){
		p[i]+=p[i+1];
	}
	temp=0;
	for(int i=0;i<n;i++){
		temp+=arr[i];
		if(temp==(s/3)){
			ans+=p[i+2];
		}
	}
	cout<<ans;

}