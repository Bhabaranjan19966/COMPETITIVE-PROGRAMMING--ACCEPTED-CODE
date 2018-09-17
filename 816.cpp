#include<bits/stdc++.h>
using namespace std;
int main()
{	
	string s,t;
	cin>>s;
	t=s;
	reverse(t.begin(),t.end());
	if(t==s){
		cout<<0;return 0;
	}
	int h1,h2,m1,m2;
	h1=s[0]-48;
	h2=s[1]-48;
	m1=s[3]-48;
	m2=s[4]-48;
	int t_min,r,hour,min,ans=0;
	t_min=(h1*10+h2)*60+(m1*10+m2);
	while(1){
		t_min+=1;
		t_min%=1440;
		ans++;
		hour=(t_min/60)%24;
		min=(t_min)%60;
		h1=hour%10;
		r=hour/10;
		h2=r%10;
		m1=min%10;
		r=min/10;
		m2=r%10;
		if(h1==m2&&h2==m1){
			cout<<ans;break;
		}
	}
}