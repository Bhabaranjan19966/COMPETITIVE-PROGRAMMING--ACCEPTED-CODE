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
int arr[3001];
int main()
{
    int n,k,z=-1;
    cin>>n;
    rep(i,0,n){
        cin>>k;
        arr[k]=1;
        z=max(z,k);
    }
    rep(i,1,z+2){
        if(!arr[i]){
            cout<<i; return 0;
        }
    }
}
