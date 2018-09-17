#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int  sa=0,sb=0;
    string s;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    }
        for(int i=0;i<n;i++)
        {
            if(abs(sa+arr[i][0]-sb)<=500)
            {
                s+='A';sa+=arr[i][0];
            }
            else{s+='G';sb+=arr[i][1];}
        }
        cout<<s;
}
