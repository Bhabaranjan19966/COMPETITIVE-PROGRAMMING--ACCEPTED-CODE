#include<bits/stdc++.h>
using namespace std;
int arr[256];
int main()
{
    int n;
    cin>>n;
    string s;
    bool val=false;
    cin>>s;
    int num=0,len=0,w=0,word=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            for(int j=i+1;j<n;j++)
            {
                if(s[j]==')')
                {
                    i=j;
                    if(w&&word)
                    {
                        w++;
                        word=0;
                    }
                    if(w==0&&word!=0)
                    {
                        w++;
                        word=0;
                    }
                    break;
                }
                else{
                    if(s[j]!='_')
                    {
                     word++;

                    }
                    else{
                        if(word)
                        {
                            w++;
                            word=0;
                        }
                    }
                }
            }
        }
        else{
        if(s[i]!='_')
        {
            len++;
            if(s[i+1]=='(')
            {
                arr[len]++;
                len=0;
            }

        }
        else{
            arr[len]++;
            len=0;
        }
        }

    }
    if(len)
        {
         arr[len]++;
        }
      for(int i=n;i>0;i--)
      {
          if(arr[i]!=0)
          {
              cout<<i<<"\t";
              val=true;
              break;
          }
      }
      if(!val)
      {
          cout<<"0\t";
      }

          cout<<w;



}
