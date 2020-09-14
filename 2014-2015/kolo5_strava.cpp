#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int k,l,b,s,uk;
    int h=0;
    scanf("%d %d",&k,&l);
    uk=((l/k)*2)+2;
    s=uk/2;
    for(int i=1;i<=s;i++){
        if(i%3==0) h=h+1;}
    h=h*2;
    b=uk-h;
    printf("%d %d",b,h);
    return 0;
}
