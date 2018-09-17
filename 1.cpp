#include<iostream>
using namespace std;
int main()
{
   long long int n,m,a;
    cin>>n>>m>>a;
    long long int tempn,tempm,c,b;
    c=n/a;
    b=m/a;
    if(a<=n&&a<=m)
    {

    tempn=n%a;
    tempm=m%a;
    if(tempn>0)
    {
        c=c+1;
    }
    if(tempm>0)
    {
        b=b+1;
    }
    cout<<c*b;
    }
    else
    {
        if(c==0)
        {
            c=1;
        }
        if(b==0)
        {
            b=1;
        }
        cout<<c*b;
    }
}
