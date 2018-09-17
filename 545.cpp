#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
typedef long long  ll;
int main()
{
    ll n,h,b,a;
    cin>>n;
    bool fw=0,bw=0,test=0;
    ll bc,fc,c=0;
    vector<pair<ll , ll  > >v;
    for(ll i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    if(n==1||n==2){
        cout<<n;return 0;
    }
    for(ll i=1;i+1<n;i++){
           bc=v[i].f-v[i].s;
           fc=v[i].f+v[i].s;
           if(v[i-1].f<bc){

            if(fw){
                if(bc>v[i-1].f+v[i-1].s){
                   test=1; c++;fw=0;
                }
                else
                {
                    bw=0;fw=0;
                }
            }
            else {
                c++;test=1;
            }
           }
            if(!test&&fc<v[i+1].f){
                fw=1;c++;bw=0;test=1;
            }
            if(!test) {
                fw=0;bw=0;
            }
        test=0;

       }
       cout<<c+2;

}

