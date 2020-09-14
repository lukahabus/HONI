#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int main()
{
int S[8];
for (int i=0;i<8;i++){
    cin>>S[i];}
int n1,n2,n3,n4,n5,n6,n7,n8;

n1=S[0]+S[1]+S[2]+S[3];
n2=S[1]+S[2]+S[3]+S[4];
n3=S[2]+S[3]+S[4]+S[5];
n4=S[3]+S[4]+S[5]+S[6];
n5=S[4]+S[5]+S[6]+S[7];
n6=S[5]+S[6]+S[7]+S[0];
n7=S[6]+S[7]+S[0]+S[1];
n8=S[7]+S[0]+S[1]+S[2];

int G[]={n1,n2,n3,n4,n5,n6,n7,n8};
sort(G,G+8);
printf("%d",G[7]);
}
