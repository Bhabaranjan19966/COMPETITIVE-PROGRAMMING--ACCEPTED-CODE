#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,n,s=0,c=0;
    cin>>n>>m;
    long long int arr[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+m);
    if(arr[0]==1||arr[m-1]==n){cout<<"NO";return 0;}
    if(!m){cout<<"YES";return 0;}
    for(int i=0;i<m-2;i++)
    {
        if(arr[i+1]==arr[i]+1)
        {
                if(arr[i+2]==arr[i]+2)
                    {
                        cout<<"NO";return 0;
                    }
        }
    }
    cout<<"YES";
}
