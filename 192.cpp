#include<bits/stdc++.h>
using namespace std;
int arr[1001];
int main()
{
    int n,m=0,j,temp,ind=3000;
    cin>>n;
    for(int i=0;i<n;i++){cin>>arr[i];}
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(j=0;j<n;j++)
        {
            temp=arr[j]-arr[i];
            if(temp<=0)
            {
                m++;
                if(m>1){ind=min(ind,arr[i]);}
            }
            else{m=0;}
        }
    }
    cout<<min(ind,min(arr[0],arr[n-1]));
}
