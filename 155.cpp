#include<iostream>
#include<algorithm>
using namespace std;
int i,n,k=1,m;
pair <int,int> a[10005];
int main(){
	cin>>n;
	for(i=0;i<n;i++)
	cin>>a[i].second>>a[i].first;
	sort(a,a+n);
	reverse(a,a+n);

	for(i=0;i<n;i++){
	k=k+a[i].first;
	k--;m=m+a[i].second;
	if(k<=0)break;

	}
	cout<<m;
}
