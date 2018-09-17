#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n>>k;
    k=k-1;
    for(int i=n-1;i>0;i--)
    {
          if(k==pow((double)2,(double)i)-1)
          {
              cout<<i+1;return 0;
          }
          else{k%=(long long int)pow((double)2,(double)(i-1));}
    }
    cout<<1;
}
