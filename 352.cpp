#include<cstdio>
#include<cstdlib>
#include<vector>
using namespace std;
vector<int >adj[100001];
int vl[100001][2];
int main()
{
    int n,m=0,num=0,cnt=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        m=max(m,arr[i]);
    }
    for(int i=0;i<n;i++)
    {
            adj[arr[i]].push_back(i);
    }
    for(int i=0;i<=m;i++)
    {
        if(adj[i].size()==1){vl[i][0]=1;cnt++;continue;}
        if(adj[i].size()>=2)
            {
                num=abs(adj[i].at(0)-adj[i].at(1));
                bool val=false;
                for(int j=1;j<adj[i].size();j++)
                {
                    if(num!=abs(adj[i].at(j-1)-adj[i].at(j)))
                    {
                        val=true;break;
                    }
                }
                if(!val){vl[i][0]=1;vl[i][1]=num;cnt++;}
            }
    }
    printf("%d\n",cnt);
    if(cnt){
    for(int i=0;i<=m;i++)
    {
        if(vl[i][0])
        {
            printf("%d %d\n",i,vl[i][1]);
        }
    }}return 0;

}
