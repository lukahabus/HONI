#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;

int main ()
{
  int P[24];
  for(int i=0;i<4;i++)
    scanf("%s ",&P[i]);
  int M;
  cin>>M;
  string O;
  for(int i=0;i<M;i++)
  cin>>O;
  if(M==0) printf("Jao");
  if(M==1) cout<<O;
  else if(M>=2) cout<<O;

return 0;
}
