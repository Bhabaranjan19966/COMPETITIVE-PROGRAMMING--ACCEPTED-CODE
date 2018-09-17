#include<bits/stdc++.h>
using namespace  std;
int main()
{
    int n,ans=0;
    cin>>n;
    if(n&1)
    {
        n=n-3;
    cout<<(n/2)+1<<endl;
    for(int i=0;i<n;i++)
    {
        if(ans<n)
        {
            cout<<"2"<<"\t";
            ans+=2;

        }
    }
    cout<<"3";
    }
    else{
        cout<<n/2<<endl;
        for(int i=1;i<=(n/2);i++)
        {
            cout<<"2"<<"\t";
        }
    }
}
