#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double n,c=1,x,y,t,m,ansx=0,ansy=0;
    cin>>n>>x;
    for(int i=n;i>0  ;i--)
    {
        cin>>t;
        ansx+=(t*pow(x,(n-c)));
        c++;
    }
    c=1;
    cin>>m>>y;
    for(int i=m;i>0  ;i--)
    {
        cin>>t;
        ansy+=(t*pow(y,(m-c)));
        c++;
    }
    if(ansx<ansy)
    {
        cout<<"<";
    }
    else if(ansx>ansy)
    {
        cout<<">";
    }
    else{
        cout<<"=";
    }
}
