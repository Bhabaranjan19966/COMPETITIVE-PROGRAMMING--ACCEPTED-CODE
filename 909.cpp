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
char a[12],b[12];
int main()
{
    string c="",d="";
    scanf("%s %s",&a,&b);
    c+=a[0];
    d+=b[0];
    int x=a[0];
    for(int i=1;a[i];i++){
        if(a[i]<b[0]){
            c+=a[i];
            x=min(x,(int)a[i]);
        }
        else{
            break;
        }
    }

    cout<<c<<d;
}
