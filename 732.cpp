#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long int n,s,d=0,temp;
    cin>>n>>s;
    long long int arr[n],re[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    if(n==1){ cout<<"0"<<endl<<arr[0];return 0;}
    else{
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]+arr[i+1]<s)
        {
            temp=arr[i+1];
            arr[i+1]=s-arr[i];
            d+=arr[i+1]-temp;
        }
    }}
    cout<<d<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
