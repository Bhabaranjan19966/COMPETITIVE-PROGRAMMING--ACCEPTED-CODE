#include<iostream>
using namespace std;
int main()
{
    int a,b,r=0,h,d=0;
    cin>>a>>b;
    h=a;
      while(a/b)
      {
          r+=a/b;
          a=(a/b)+(a%b);

      }
      cout<<(r+h);
}
