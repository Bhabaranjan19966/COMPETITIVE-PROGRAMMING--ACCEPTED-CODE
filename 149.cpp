#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string a,b;
int l=-1,hr=24,sr=60;
ll ch,cs,h,sec;
ll hsv[2];
int arr['Z'+1];

void inttialize(){
	int k=0;
	for(int i='0';i<='9';i++){
		arr[i]=k++;
	}
	for(int i='A';i<='Z';i++){
		arr[i]=k++;
	}
	return ;
}
void  calc(ll mid){

	ll val=arr[a[0]];
	for(int i=1;i<a.length();i++)
	{
		val=val*mid+arr[a[i]];
	}
	hsv[0]=val;
	ll val2=arr[b[0]];
	for(int i=1;i<b.length();++i){

		val2=val2*mid+arr[b[i]];
	}
	hsv[1]=val2;
	return ;
}
int main()
{
	ios_base::sync_with_stdio(false);
	inttialize();
	bool val=false;ll mid ;
	string s;		
	cin>>s;
	for(int i=0;i<s.length();i++){
		
		if(!val){

			if(s[i]==':'){
				val=true;
			}
			else a+=s[i],l=max(l,arr[s[i]]);
		}
		else{
			b+=s[i];
			l=max(l,arr[s[i]]);
	}
		}
	 ++l;
	 calc(l);
	if((hsv[0]>=24ll)){

		cout<<0;return 0;
	}
	if(hsv[1]>=60ll){
		cout<<0;return 0;
	}
	ch+=(arr[a[a.size()-1]]);
	cs+=(arr[b[b.size()-1]]);
	for(int i=0;i<a.size();++i){
		h+=arr[a[i]];
	}
	for(int i=0;i<b.size();++i){
		sec+=arr[b[i]];
	}
	if(h==ch&&cs==sec){
	if(h<24){
		cout<<"-1"; exit(0);
	}
	else{
		cout<<0;return 0;
	}
	}	

	ll l_val=l;
	while(hr-l>1){
		mid=(l+hr)/2;calc(mid);
		if(hsv[0]<24ll)l=mid;
		else hr=mid;
	}
	l=l_val;
	while(sr-l>1){

		mid=(l+sr)/2;
		calc(mid);
		if(hsv[1]<60ll)l=mid;
		else sr=mid;
	}
	ll endd=0;
	if(ch==h)endd=sr;
	else endd=min(hr,sr);
	for(ll i=l_val;i<endd;i++){

		cout<<i<<" ";
	}

}