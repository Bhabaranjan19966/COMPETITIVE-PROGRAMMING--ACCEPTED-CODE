#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    long long int n,m,ans=0;
    cin>>n>>m;
    int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    ans+=(arr[0]-1);
    for(int i=1;i<m;i++)
    {
        if(arr[i-1]<=arr[i])
        {
            ans+=(arr[i]-arr[i-1]);
        }
        else
            {
                ans+=(n-(arr[i-1]-arr[i]));
            }
    }
    cout<<ans;
}
