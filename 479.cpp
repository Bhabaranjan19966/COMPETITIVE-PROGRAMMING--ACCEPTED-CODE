#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long  ll;
int main()
{
    int n;
    ll a,b,ta,tb,ans,k;
    cin>>n;
    vector< pair< ll , ll> >v;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        v.push_back( make_pair(a,b) );
    }
    sort(v.begin(),v.end());
    ans=-1;
    for(int i=0;i<n;i++){
        if(ans<=v[i].s){
            ans=v[i].s;
        }
        else {
            ans=v[i].f;
        }
    }
    cout<<ans;
}
