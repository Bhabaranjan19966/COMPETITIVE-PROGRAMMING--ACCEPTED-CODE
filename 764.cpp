#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    int t=floor(n/2);
    for(int i=1;i<=t;i++)
    {
        if(i&1)
        {
            swap(arr[i],arr[n-i+1]);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
