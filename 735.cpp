#include<bits/stdc++.h>
using namespace std;
int arr[100001];
int main()
{
    int  n,n1,n2;
    int t1=n1,t2=n2;
   float ans=0.000000;
   cin>>n>>n1>>n2;
   float arr[n];
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   if(n1<n2){ swap(n1,n2);}
   setprecision(6);
   for(int i=n-1;i>=n-n2;i--)
   {
    ans+=arr[i]/n2;
   }
   for(int i=n-n2-1;i>=n-n2-n1;i--)
   {
    ans+=arr[i]/n1  ;

   }
   cout<<setprecision(10)<<ans;
}


