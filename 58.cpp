#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int >vi;
    vector<int >vii;
    scanf("%d",&n);
    for(int i=2;i*i<=n;i++)
    {
        if(!(n%i))
        {
            vi.push_back(i);
            vi.push_back(n/i);
        }
    }
    vi.push_back(1);
    sort(vi.begin(),vi.end());
    vii.push_back(n);
    for(int i=vi.size()-1;i>=0;i--)
    {
        if(!(vii.at(vii.size()-1)%vi.at(i))&&(vii.at(vii.size()-1)!=vi.at(i)))
        {
            vii.push_back(vi.at(i));
        }
    }
    for(int i=0;i<vii.size();i++)
    {
        cout<<vii.at(i)<<" ";
    }
    return 0;
}
