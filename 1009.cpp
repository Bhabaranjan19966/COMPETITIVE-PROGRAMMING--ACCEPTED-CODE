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
    int n,m;
    cin>>n>>m;
    int g[n],b[m];
    for(int i = 0 ; i< n ; i++) {
        cin>>g[i];
    }
    for(int i = 0 ; i< m ; i++) {
        cin>>b[i];
    }
    int gin=0,bin=0,gc=0;
    while(gin!=n&&bin!=m){
        if(g[gin] <= b[bin]){
            gc++;
            gin++;
            bin++;
        }
        else{
            gin++;
        }
    }
    cout<<gc;
}
