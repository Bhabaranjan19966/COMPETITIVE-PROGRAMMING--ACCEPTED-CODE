#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    int arr[n+2][2],li=0,ri=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<(2);j++)
        {
            cin>>arr[i][j];
            if(j==0)
            {
                li+=arr[i][0];
            }
            if(j==1)
            {
                ri+=arr[i][1];
            }
        }
    }
    arr[n+1][0]=li;
    arr[n+1][1]=ri;
    int last=abs(arr[n+1][0]-arr[n+1][1]);
    int cmp,ind=0;
    for(int i=1;i<n+1;i++)
    {
        for(int j=0;j<2;j++)
        {
            cmp=abs((arr[n+1][0]-arr[i][0]+arr[i][1])-(arr[n+1][1]-arr[i][1]+arr[i][0]));
            if(cmp>last)
            {
                ind=i;
                last=cmp;
            }
        }
    }
    cout<<ind;

}
