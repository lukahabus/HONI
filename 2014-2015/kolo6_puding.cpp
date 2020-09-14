#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  int n,a,b,c,d,e,hrana;
  scanf("%d %d %d %d %d %d",&n,&a,&b,&c,&d,&e);
  hrana=(a+b+c)/2;
  if((n-hrana)>=(d/2))
    printf("PUDING OD COKOLADE");
  else
    printf("PUDING OD VANILIJE");
  return 0;
}
