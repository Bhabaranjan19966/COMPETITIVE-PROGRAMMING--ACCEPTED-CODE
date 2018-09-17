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
    opt;
    int m;
    cin>>m;
    int arr[m];
    cin>>arr[0];
    if(m==1){
        cout<<1;
        nl;
        cout<<arr[0]; return 0;
    }
    bool v=0;
    rep(i,1,m){
    cin>>arr[i];
    if(arr[i]%arr[0]){
        v=1;
    }
    }
    if(v){
        cout<<-1;return 0;
    }
    cout<<2*(m-2)+2;nl;
    for(int i=1;i<m;i++){

        cout<<arr[0]<<" "<<arr[i]<<" ";
    }

}
