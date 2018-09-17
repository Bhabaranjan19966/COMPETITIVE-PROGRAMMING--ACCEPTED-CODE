#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
  string a,b,c,d,s;
  cin>>a>>b>>c>>d;
  int arr[4][4];
  for(int i=0;i<4;i++)
  {
      arr[0][i]=a[i];
      arr[1][i]=b[i];
      arr[2][i]=c[i];
      arr[3][i]=d[i];
  }
  for(int i=0;i<4;i++)
  {
     for(int j=0;j<2;j++)
     {
         if(arr[i][j]+arr[i][j+1]+arr[i][j+2]==286)
         {
             cout<<"YES";return 0;
         }
     }
  }
    for(int i=0;i<2;i++)
    {
     for(int j=0;j<4;j++)
     {
         if(arr[i][j]+arr[i+1][j]+arr[i+2][j]==286)
         {
             cout<<"YES";return 0;
         }
     }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        if(arr[i][j]+arr[i+1][j+1]+arr[i+2][j+2]==286)
        {
            cout<<"YES";return 0;
        }
    }
    for(int i=0;i<2;i++)
    {
        for(int j=2;j<4;j++)
            if(arr[i][j]+arr[i+1][j-1]+arr[i+2][j-2]==286)
            {
            cout<<"YES";return 0;
        }
    }
    cout<<"NO";
}
