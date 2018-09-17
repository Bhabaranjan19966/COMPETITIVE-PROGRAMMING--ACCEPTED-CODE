#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b,c,temp,temp2;
    cin>>a>>b>>c;
    int arr[4];
    arr[0]=a+b+c;
    arr[1]=2*(a+b);
    arr[2]=2*(a+c);
    arr[3]=2*(b+c);
    sort(arr,arr+4);
    cout<<arr[0];
}


