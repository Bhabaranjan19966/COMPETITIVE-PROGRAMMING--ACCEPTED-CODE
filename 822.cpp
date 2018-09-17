#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t;
	int mn=-2,k,cm=0,indx,a,b;
	cin>>a>>b>>s>>t;
	for(int i=0;i+s.length()-1<t.length();++i){
		cm=0;k=i;
		for(int j=0;j<s.length();++j){
			if(t[k]==s[j]){
				cm++;
			}
			k++;
		}
		if(cm>mn){
				mn=max(cm,mn);				
				indx=i;
			}
	}
	cout<<s.length()-mn<<"\n";
	for(int i=0;i<s.length();++i){
		if(s[i]!=t[indx]){
			cout<<i+1<<" ";
		}
		indx++;
	}
}