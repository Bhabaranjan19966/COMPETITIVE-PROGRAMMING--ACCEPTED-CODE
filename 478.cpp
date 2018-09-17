#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll arr[3],ans=0,l=0,k=0;
    cin>>arr[0]>>arr[1]>>arr[2];
    sort(arr,arr+3);
    cout<<min((arr[0]+arr[1]+arr[2])/3,arr[0]+arr[1]);
}
