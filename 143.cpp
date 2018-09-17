#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s,i="",f=".",ri="$";
    int l,k=0,j=0;
    bool val=false;
    cin>>s;l=s.length();
    if(s[0]=='-'){val=true;j++;}
    while(s[j]!='.'&&j<l)
    {
        i+=s[j];
        j++;
    }
    if(!i.length()){i+="0";}
    while(j<l-1&&k<2)
    {
        j++;
        k++;
        f+=s[j];
    }
    if(k==0){f+="00";}
    if(k==1){f+="0";}
    k=0;k=i.length()%3;
    for(int in=0;in<i.length();in++)
    {
        if(in%3==k&&in)
        {
            ri+=",";
            ri+=i[in];
        }
        else{ri+=i[in];}
    }
    ri+=f;
    if(val){cout<<"("<<ri<<")"; return 0;}
    else{cout<<ri;return 0;}
}
