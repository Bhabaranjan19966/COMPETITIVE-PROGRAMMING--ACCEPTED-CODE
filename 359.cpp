#include<cstdio>
#include<iostream>
#define S scanf
#define P printf
using namespace std;
int main()
{
    int n,k;
    S("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        if(k)
        {
            k--;
            P("%d %d ",(2*i)+2,(2*i)+1);
        }
        else
        {
            P("%d %d ",(2*i)+1,(2*i)+2);
        }
    }
}
