#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
  int k,x,t,c=0,u=0,y=0,z=0;
  cin>>k;
  int K[250];
    for(int i=1;i<=k;i++)
      scanf("%d",&K[i]);
  cin>>x;
  int O[5];
    for(int i=1;i<=4;i++)
      scanf("%d",&O[i]);
  cin>>t;
  int T[t];
    for(int i=1;i<=t;i++)
      scanf("%d",&T[i]);

  for(int j=1;j<=4;j++){
    for(int i=1;i<=t;i++){
      if(O[j]==T[i])
          c+=K[j];
      }}

  for(int i=1;i<=t;i++){
    y+=K[T[i]];}
    z=y-c;

  if(c>x) u=x+z;
  else if(c<x) u=y;
  cout<<u;
}
