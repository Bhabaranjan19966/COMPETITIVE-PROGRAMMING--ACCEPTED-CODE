#include<bits/stdc++.h>
using namespace std;
int arr[101];
int main()
{
    int n,d,l,even ,odd;
    cin>>n>>d>>l;
    even=n/2;odd=(n/2+n%2);
    if((d>(odd*l-even))||(d<(odd-l*even)))
    {
        cout<<"-1";return 0;
    }
    int need=d-(odd-even);
    for(int i=1;i<=n;i++){arr[i]=1;}
    for(int i=1;i<=n;i++)
    {
        if(i%2&&need>0)
        {
            arr[i]+=min(l-1,need);
            need-=min(l-1,need);
        }
        if(i%2==0&&need<0)
        {
            arr[i]+=min(l-1,-need);
            need+=min(l-1,-need);
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
