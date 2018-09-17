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
    for(int i=0;i<n-1;i++)
    {
        if(arr[i]%2!=0)
        {
            if(arr[i+1]>0)
            {
            arr[i+1]-=1;
            if(arr[i+1]<0)
            {
                cout<<"NO";
                return 0;
            }
            }
            else
                {
                cout<<"NO";
                return 0;
            }
        }

    }
    if(arr[n-1]%2==0)
    {
     cout<<"YES";
    }
    else
                {
                cout<<"NO";
                return 0;
            }

}
