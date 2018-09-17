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
int m[100];
int main()
{
    int arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    if(arr[0]==1){
        cout<<"YES";return 0;
    }
    else if(arr[0]==2&&arr[1]==2){
        cout<<"YES";return 0;
    }
    else if(arr[0]==3&&arr[1]==3&&arr[2]==3){
        cout<<"YES";return 0;
    }
    else if(arr[0]==2&&arr[1]==4&&arr[2]==4){
        cout<<"YES";return 0;
    }
    else {
        cout<<"NO";
    }


}
