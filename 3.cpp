#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s,e;
    cin>>s>>e;
    cout<<max(abs(s[0]-e[0]),abs(s[1]-e[1]))<<endl;
    while(s!=e)
    {
        if(s[0]>e[0])cout<<'L',s[0]--;
        if(s[0]<e[0])cout<<'R',s[0]++;
        if(s[1]>e[1])cout<<'D',s[1]--;
        if(s[1]<e[1])cout<<'U',s[1]++;
        cout<<endl;
    }
}
