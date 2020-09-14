#include <cstdio>
#include <iostream>
using namespace std;

int zz(int broj)
{
    int zbroj = 0, i = 0;
    int znamenke[100];

    do {
       znamenke[i] = broj % 10;
       ++i;
    } while (broj /= 10);

    while (--i >= 0)
          zbroj += znamenke[i];

    return zbroj;
}

int main()
{
    int l,d,x,N,M;
    cin>>l>>d>>x;
    for(int n=l;n<=d;n++)
        if(zz(n)==x) {N=n;break;}
    for(int m=d;m>=l;m--)
        if(zz(m)==x) {M=m;break;}
    printf("%d\n%d",N,M);
    return 0;
}
