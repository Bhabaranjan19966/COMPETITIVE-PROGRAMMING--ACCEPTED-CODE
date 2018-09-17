#include<cstdio>
#include<map>
#include<cstdlib>
using namespace std;
map<double,int>m;
map<int ,int >v;
int main()
{
    int n,x,y,ans=0;;
    double slope=0;
    scanf("%d%d%d",&n,&x,&y);
    int arr[n][2];
    for(int i=0;i<n;i++)
    {
        scanf("%d%d",&arr[i][0],&arr[i][1]);
    }
    for(int i=0;i<n;i++)
    {
        if(!(x-arr[i][0])){if(!v[x]){v[x]++;ans++;}}
        else{
        slope=(double)((double)(y-arr[i][1])/(double)(x-arr[i][0]));
        if(!m[slope]){m[slope]++;ans++;}}
    }
    printf("%d",ans);
}
