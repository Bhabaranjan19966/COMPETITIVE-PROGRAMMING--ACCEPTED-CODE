#include<bits/stdc++.h>
using namespace std;
long long int arr[1000001];
int main()
{
   long long int n,c,ans=1;
    bool val=true;
    cin>>n>>c;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int i=0;
    for(;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])<=c&&val==false)
        {
            ans++;
        }
        if((arr[i+1]-arr[i])<=c&&val==true)
        {
           ans++;
            val=false;
        }
        if((arr[i+1]-arr[i])>c&&val==false)
        {
            ans=1;
        }
    }
    cout<<ans;
}
