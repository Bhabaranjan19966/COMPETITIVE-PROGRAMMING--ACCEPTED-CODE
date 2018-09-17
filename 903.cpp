#include<bits/stdc++.h>
#define opt ios_base::sync_with_stdio(0)
#define rep(i,a,b) for(int i=a;i<b;i++)
#define repd(i,a,b) for(int i=a;i>b;i--)
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define nl cout<<"\n"
typedef long long ll;
/*---------end of temp--------- */
using namespace std;

int main()
{
    vector<string>v;
        int h1,a1,c,h2,a2;
        cin>>h1>>a1>>c>>h2>>a2;
        while(h2>0){
            if(h2<=a1) {
                v.pb("STRIKE");break;
            }
            else{
            if(h1<=a2){
                v.pb("HEAL");
                h1+=c;
                h1-=a2;
            }
            else{
                v.pb("STRIKE");
                h2-=a1;
                h1-=a2;
            }
            }
        }
        cout<<v.size();
        cout<<"\n";
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<"\n";
        }
}
