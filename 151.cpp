#include<bits/stdc++.h>
#define S scanf
#define P printf
#define x first
#define y second
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n,a;
    string s,ss;
    cin>>n;
    long long int t=0,p=0,g=0;
   map<string ,pair<long long int ,pair<long long int ,long long int > > >mp;
   vector <string >pts;
   bool v;
    for(int i=0;i<n;i++)
    {
        cin>>a>>s;
        pts.push_back(s);
        mp[s]=make_pair(0,make_pair(0,0));
        for(int j=0;j<a;j++)
        {
            cin>>ss;

            if(ss[0]==ss[1]&&ss[0]==ss[3]&&ss[0]==ss[4]&&ss[0]==ss[6]&&ss[0]==ss[7])
                {
                    mp[s].y.x++;
                    t=t<mp[s].y.x?mp[s].y.x:t;
                }
            else if((ss[0]>ss[1])&&(ss[1]>ss[3])&&(ss[3]>ss[4])&&(ss[4]>ss[6])&&(ss[6]>ss[7]))
            {
                mp[s].y.y++;
                p=p<mp[s].y.y? mp[s].y.y:p;
            }
            else
            {
                mp[s].x++;
                g= g<mp[s].x? mp[s].x:g;
            }
        }
    }
      bool  val=true;
      cout<<"If you want to call a taxi, you should call: ";
      for(int i=0;i<pts.size();i++)
      {
          if(mp[pts[i]].y.x==t&&val)
          {

              cout<<pts[i];val=false;
          }
          else if(mp[pts[i]].y.x==t&&!val)
          {
              cout<<", "<<pts[i];
          }
      }
        cout<<".\n";
        cout<<"If you want to order a pizza, you should call: ";
        val=true;
       for(int i=0;i<n;i++)
      {
          if(mp[pts[i]].y.y==p&&val)
          {
              cout<<pts[i];val=false;
          }
          else if((mp[pts[i]].y.y==p&&!val))
          {
              cout<<", "<<pts[i];
          }
      }
        cout<<".\n";
        cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
        val=true;
        for(int i=0;i<pts.size();i++)
        {
          if(mp[pts[i]].x==g&&val)
          {
              cout<<pts[i];val=false;
          }
          else if((mp[pts[i]].x==g&&!val))
          {
              cout<<", "<<pts[i];
          }
      }
        cout<<".\n";
}

