#include <iostream>
#include <map>
#include <string>
#include <stdio.h>
using namespace std;
const int day[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
map<string,int>f;
string s;
int main()
{
    int i,j,n=0,y,m,d;
    string t,x;
    cin>>s;
    for (i=0;i+10<=(int)s.length();++i)
    {
        x=s.substr(i,10);
        if (sscanf((x+"*1").c_str(),"%2d-%2d-%4d*%d",&d,&m,&y,&j)!=4)continue;
        if ((y<2013)||(y>2015))continue;
        if ((m<1)||(m>12))continue;
        if ((d<1)||(d>day[m]))continue;
        if (n<++f[x])n=f[x],t=x;
    }
    cout<<t;
    return 0;
}
