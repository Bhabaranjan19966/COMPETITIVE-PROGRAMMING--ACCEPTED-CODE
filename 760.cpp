#include <bits/stdc++.h>
using namespace std;

int n,m,k,a,b,i=1;

main(){
	cin>>n>>m>>k;m-=n;a=1;

	if(m==0)return cout<<1,0;
	m--;

	while(m>=0){
		if(k+i<=n)a++;
		if(k-i>=1)  a++;
		m-=a    ;
            i++;
	}
        cout<<i;
}
