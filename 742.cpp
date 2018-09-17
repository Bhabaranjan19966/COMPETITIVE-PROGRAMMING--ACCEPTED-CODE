#include<bits/stdc++.h>
using namespace std;
int check[1000009];
int main()
{
   long long  int n,x,d,ans=0,temp;
    cin>>n>>x;
    temp=x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        ans+=check[arr[i]^x];
        check[arr[i]]++;
    }
    cout<<ans;
}
