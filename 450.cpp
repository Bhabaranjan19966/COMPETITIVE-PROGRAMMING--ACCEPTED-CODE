#include<bits/stdc++.h>
using namespace std;
long long int  arr[6];
int main()
{
    long long int x,y,n,m;
    cin>>x>>y>>n;
    n-=1;
    m=1000000007;
    if(x<0){x=m+(x%m);}
    if(y<0){y=m+(y%m);}
    arr[0]=x%m;
    arr[1]=y%m;
    arr[2]=(m+(y-x))%m;
    arr[3]=(m-(x))%m;
    arr[4]=(m-(y))%m;
    arr[5]=(m+(x-y))%m;
    cout<<arr[n%6];
}
