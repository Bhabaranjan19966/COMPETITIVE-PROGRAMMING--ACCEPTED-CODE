#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,d;
    cin>>n>>l;
    int arr[n],ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int c=0,k=0,temp;
    for(int i=0;i<l;)
    {
        while(i>arr[c%n]){if(i>arr[n-1]){c=0;break;}c++;}
            temp=c;
            for(int j=0;j<n;j++)
            {
                if((l+(arr[c%n]-i))%l==ar[j])
                {
                    k++;c++;
                }
                else{k=0;c=temp;i++;break;}
            }
        if(k==n){cout<<"YES";return 0;}
    }
    cout<<"NO";
}
