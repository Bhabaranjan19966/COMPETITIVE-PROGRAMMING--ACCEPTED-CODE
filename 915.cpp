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
		ll n,pos,l,r;
		cin>>n>>pos>>l>>r;

		if(l==1 && r==n){
            cout<<0;return 0;
		}
		if(pos>=l&&pos<=r){
            int a,b,c;
            if(l==1){
                cout<<abs(pos-r)+1;return 0;
            }
            if(r==n){
                cout<<abs(pos-l)+1;return 0;
            }
            a=abs(pos-l);
            b=abs(pos-r);
            cout<<2*min(a,b)+2+max(a,b);return 0;
		}
		if(pos<l){
                if(r==n){
                    cout<<abs(pos-l)+1; return 0;
                }
                cout<<abs(pos-r)+2;return 0;
		}
		if(pos>r){
            if(l==1){
                cout<<abs(pos-r)+1;return 0;
            }
            cout<<abs(pos-l)+2;return 0;
		}

}
