#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
int main()
{
  double a,b,c;
  cin>>a>>b>>c;
  if(c==0&&a!=b)
  {
      cout<<"NO";
      return 0;
  }
  if(a==b)
  {
      cout<<"YES";
      return 0;
  }
  if(a>b&&c>0)
  {
      cout<<"NO";
      return 0;
  }
  if(a<b&&c<0)
  {
      cout<<"NO";
       return 0;
  }
  
 double temp=(b-a)/c;
 if(floor(temp)==ceil(temp))
 {
     cout<<"YES";
     return 0;
 }
 else{
     cout<<"NO";
     return 0;
 }
  }
  
