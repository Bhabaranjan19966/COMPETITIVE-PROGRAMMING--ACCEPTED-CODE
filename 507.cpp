#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int r,a,b,c,d,e;
    cin>>r>>a>>b>>c>>d;
    e=ceil(sqrt((abs(a-c)*abs(a-c))+(abs(b-d)*abs(b-d))));
    cout<<ceil((double)e/(2*r));
}
