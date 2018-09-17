#include<bits/stdc++.h>
using namespace std;
int main()
{

    int f,h,m;
    char c;
    cin>>f>>h>>c>>m;
    if(f==12)
    {
        if(m>59)
        {
            m-=((m/10)*10);
        }
        if(h>12&&h%10==0)
        {
            h-=(((h/10)*10)-10);
        }
        if(h>12)
        {
            h-=((h/10)*10);
        }
        if(h==0)
        {
            h=1;
        }
    }
    else
        {
        if(m>59)
        {
            m-=((m/10)*10);
        }
        if(h>23)
        {
            h-=((h/10)*10);
        }
        }
        if(h<=9)
        {
            cout<<"0"<<h<<":";
        }
        else
        {
            cout<<h<<":";
        }
        if(m<=9)
        {
            cout<<"0"<<m;
        }
        else{
            cout<<m;
        }

}
