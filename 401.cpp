#include<bits/stdc++.h>
using namespace std;
int  main()
{
	int m,n,k;
	cin>>n>>m;
	k=n;
	
	if((m<n-1)||(m>(2*n+2))) {
		cout<<-1;return 0;
	}

	if(m<=n+1){
		if(m==n-1){

			while(m--){
				cout<<"01";
			}
			cout<<0;return 0;

		}
		else {

			for(int i=0;i<min(m,n);i++){
				cout<<"10";
			}
			m-=min(m,n);
			n-=min(m,n);
			if(m){
				cout<<1;
			}
		}
	}
	else {

		int d=m-(n+1);
		
		for(int i=0;i<d;i++){
		
			cout<<"11";
			if(n>0){
				cout<<0;n--;
			}
			m-=2;
			
		}

		if(n>0){
			while(m--){
				cout<<"1";
				if(n>0){
					cout<<"0";n--;
				}
			}
		}
		if(m>0){
			while(m--){
				cout<<1;
			}
		}
	}
}