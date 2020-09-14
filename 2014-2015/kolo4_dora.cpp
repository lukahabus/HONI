#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int x,p,y,dani,odmor;
    scanf("%d", &x);
    scanf("%d", &p);
    scanf("%d", &y);
    dani=x/y;
    if(x%y != 0)
        dani+=1;
    else dani=dani;
    odmor=p-dani;
    if (odmor<0)
        odmor=0;
    printf("%d", odmor);
}
