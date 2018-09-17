#include<iostream>
using namespace std;
int main()
{

    double a,tep,data,t=0;
    cin>>a;
    tep=a;
    while(tep--)
    {
        cin>>data;
        t=t+data;
    }
    cout<<t/a;
}

