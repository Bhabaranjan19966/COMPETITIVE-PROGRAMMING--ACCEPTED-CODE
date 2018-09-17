#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        for(int j=i+1;j<n-1;j++)
        {
            if((arr[i]+arr[j]-arr[j+1])>0&&(arr[i]-arr[j]+arr[j+1])>0&&(arr[j]-arr[i]+arr[j+1])>0)
            {
                cout<<"YES";
                return 0;
            }

        }
    }
    cout<<"NO";return 0;
}

