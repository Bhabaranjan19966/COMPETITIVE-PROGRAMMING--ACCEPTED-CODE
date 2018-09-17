#include<cstdio>
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
    int n,c=0,m=0,p;
    bool val;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        c=1;
        for(int j=i-1;j>=0;j--)
        {

            if(arr[j]<=arr[j+1])
            {
                c++;
            }
            else{break;}
        }
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<=arr[j-1])
            {
                c++;
            }
            else{break;}
        }
        m=max(m,c);
    }
    printf("%d ",m);
}
