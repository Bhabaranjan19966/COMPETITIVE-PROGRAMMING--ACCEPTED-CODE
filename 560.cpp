#include<iostream>
#include<algorithm>
using namespace std;
int main()
{

    int a;
    cin>>a;
    int arr[a];
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+a);
    if(arr[0]==1)
    {
        cout<<"-1";
    }
    else
        {
        cout<<"1";
    }
}
