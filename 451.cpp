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
    int n,m,k,c=0;
    cin>>n>>m;
    k=n*m;
    while(k){
        k-=(n+m-1);
        c++;n--;m--;

    }
    if(c%2){
        cout<<"Akshat";
    }
    else{
        cout<<"Malvika";
    }
}
