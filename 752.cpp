#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,k;
    char c;
    cin>>n>>m>>k;
    if(!(k%2))
    {
        c='R';
    }
    else{c='L';}
    int r,l=0;
    r=ceil(((double)k/(2*m)))       ;
   l=(int)ceil((double)k/2)%m;
    if(r==0)
    {
        r=1;
    }
    if(l==0)
    {
        l=m;
    }
    cout<<r<<"\t"<<l<<"\t"<<c;
}
