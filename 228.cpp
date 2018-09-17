#include<iostream>
using namespace std;
char mat[55][55],mat1[55][55];
int main()
{ int na,nb,ma,mb,i,j,k,l,x,y,max=0,s;
cin>>na>>ma;
for (i=1; i<=na; i++)
for (j=1; j<=ma; j++)
cin>>mat[i][j];
cin>>nb>>mb;
for (i=1; i<=nb; i++)
for (j=1; j<=mb; j++)
cin>>mat1[i][j];
for (k=-50; k<=50; k++)
for (l=-50; l<=50; l++)
{ s=0;
for (i=1; i<=na; i++)
for (j=1; j<=ma; j++)
if (i+k>0 && i+k<=nb && j+l>0 && j+l<=mb) s+=(mat[i][j]-48)*(mat1[i+k][j+l]-48);
if (max<s) {max=s;x=k;y=l;} }
cout<<x<<" "<<y;
return 0; }
