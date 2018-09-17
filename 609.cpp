#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    ll arr[n],t=0,r,q,ans=0;
    for(int i=0;i<n;i++){

        cin>>arr[i];
        t+=arr[i];

    }
    q=t/n;
    r=t%n;
    sort(arr,arr+n);
    for(int i=n-1;i>-1;i--) {
        if(r) {
            if(arr[i]>(q+1)){

            ans+=(arr[i]-(q+1));
            r--;

            }
        }
        else{
            if(arr[i]>q){
                ans+=(arr[i]-q);
            }
        }
    }
    cout<<ans;
}
