#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>adj['Z'+1];
bool arr['Z'+1];
ll sz['Z'+1];
int main()
{
	ll n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++){
		adj[s[i]].push_back(i);
	}
	for(int i=0;i<s.length();++i){
		if(!arr[s[i]]){
			if(k)	k--,sz[s[i]]++,arr[s[i]]=1;
			else {cout<<"YES";return 0;}
		}
		else{
			sz[s[i]]++;
		}
		if(sz[s[i]]==adj[s[i]].size()){
				k++;
			}
	}
	cout<<"NO";

}