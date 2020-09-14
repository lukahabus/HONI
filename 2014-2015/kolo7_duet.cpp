#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
  int a[4];
  int m=0;
  for(int i=0;i<4;i++)
    scanf("%d",&a[i]);
  for(int i=0;i<4;i++){
    if(a[i]==0 || a[i]==12)
      m+=0;
  else if(a[i]!=0 && a[i]<=6)
    m+=a[i];
  else if(a[i]>6 && a[i]!=12)
      m+=12-a[i];
  }
  cout<<m;
}
