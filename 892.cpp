#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    ios_base::sync_with_stdio(false);
    cin>>n;
    ll arr[n],b[n],t=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        t+=arr[i];
    }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
    sort(b,b+n);
    for(int i=0;i+1<n;i++){
        if((b[i]+b[i+1])>=t){
            cout<<"YES";return 0;
        }
    }
    cout<<"NO";return 0;
}
