#include<iostream>
using namespace std;
double arr[15][15];
int main()
{
    int n,t,ans=0;
    cin>>n>>t;
     arr[0][0]=t*1.0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(arr[i][j]>=1.0)
            {
                double qty=(arr[i][j]-1.0)/2;
                    arr[i+1][j]+=qty;
                    arr[i+1][j+1]+=qty;
                    ans++;
            }
        }
    }
    cout<<ans;
}
