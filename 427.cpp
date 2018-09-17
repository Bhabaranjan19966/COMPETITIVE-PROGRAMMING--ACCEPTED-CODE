#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n,t,c,d=0,ans=0,s=0;
    cin>>n>>t>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>d;
        if(d>t)
        {
            s=0;
        }
    else{
        s++;
        if(s>=c)
        {
            ans++;
        }
    }
    }
        cout<<ans<<endl;
}
