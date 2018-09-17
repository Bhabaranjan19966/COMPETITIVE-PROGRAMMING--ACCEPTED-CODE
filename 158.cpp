#include<iostream>
#include<math.h>
using namespace std;
int main()
{

   double arr[5]={0,0,0,0,0};
   int n,temp=0;
    cin>>n;
   for(int i=1;i<=n;i++)
   {
       cin>>temp;
       arr[temp]+=1;
   }

   if(arr[1]>arr[3])
   {
       temp=(int)arr[2];
       if((temp%2)==0)
    cout<<arr[4]+ceil(arr[2]/2)+(arr[3])+ceil((arr[1]-arr[3])/4);
    else
    cout<<arr[4]+ceil(arr[2]/2)+(arr[3])+ceil(((arr[1]-arr[3])-2)/4);

   }
   else if(arr[1]==arr[3])
   {
       cout<<arr[4]+ceil(arr[2]/2)+(arr[1]);
   }
   else
    {
    cout<<arr[4]+ceil(arr[2]/2)+(arr[1])+((arr[3]-arr[1]));

   }
}
