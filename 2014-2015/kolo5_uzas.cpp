#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int x,y;
    int uk=0;
    scanf("%d %d",&x,&y);
    if(min(x,y)==x){
    for(int i=x;i<=y;i+=2)
        if(i%4==0) uk+=1;
    }
    else if(min(x,y)==y){
    for(int i=x;i>=y;i-=2)
        if(i%4==0) uk+=1;
    }
    printf("%d",uk);
    return 0;
}
