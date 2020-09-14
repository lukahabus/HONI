#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  int N,X,san=0,y;
  cin>>N>>X;
  int a[N];
  int b[N];
  for(int i=0;i<N;i++)
    scanf("%d %d",&a[i],&b[i]);

  for(int i=0;i<N;i++)
    if(b[(max(a[i],a[i+1]))]==1){
      y=a[i];
      a[i]=a[i+1];
      a[i+1]=y;}
    else break;

  for(int i=0;i<N;i++)
  if((a[i]<X) && b[i]==1)
    san+=1;
  else if((a[i]>X) && b[i]==0)
    san+=1;
  cout<<san;
  return 0;

}
