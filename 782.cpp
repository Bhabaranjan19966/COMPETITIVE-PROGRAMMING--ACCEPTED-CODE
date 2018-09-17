#include<bits/stdc++.h>
using namespace std;
int s[100001];
int main()
{
        int n,r=0,k=0;
        cin>>n;
        int arr[2*n];
    for(int i =0;i<2*n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<2*n;i++)
    {
        if(s[arr[i]]){s[arr[i]]=0;k--;}
        else
            {
                k++;
                r=max(r,k);
                s[arr[i]]=1;
            }

    }
    printf("%d",r);
}
