#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int k2,k3,k5,k6;
    cin>>k2>>k3>>k5>>k6;
    long int n,z=min(k2,k5);
    z=min(z,k6);
    k2=(k2-z);
    z=z*256;
    n=min(k2,k3);
    n=n*32;
    cout<<(z+n);
}
