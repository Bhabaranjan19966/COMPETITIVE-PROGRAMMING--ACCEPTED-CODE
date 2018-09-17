#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll arr[100001];
int main()
{
	 ll k,total=0,ans=0;
	string s;
	cin>>k>>s;
	for(ll i=0;i<s.length();i++){
		total+=(s[i]-48);
		arr[i]=s[i]-48;
	}
	ll len=s.length();
	sort(arr,arr+len);
	if(total<k){

		ll d=k-total,cv;
		for(ll i=0;i<s.length();++i){
			cv=9-arr[i];
			if(cv<=d){d-=cv;ans++;if(!d){cout<<ans;return 0;}}
			else {
				cout<<ans+1;return 0;
			}
		}
	}
	else{
		cout<<0;
	}

}