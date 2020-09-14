#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main(){
    string s;
    int n,x;
    int P[13],K[13],H[13],T[13];
    int p=13,k=13,h=13,t=13;
    int np=13,nk=13,nh=13,nt=13;
    cin>>s;
    for(int i=0;i<s.length();i+=3){
        if(s.at(i)=='P') {n=s.at(i+1)-48;x=s.at(i+2)-48;P[n*10+x]=1;np--;}
        if(s.at(i)=='K') {n=s.at(i+1)-48;x=s.at(i+2)-48;K[n*10+x]=1;nk--;}
        if(s.at(i)=='H') {n=s.at(i+1)-48;x=s.at(i+2)-48;H[n*10+x]=1;nh--;}
        if(s.at(i)=='T') {n=s.at(i+1)-48;x=s.at(i+2)-48;T[n*10+x]=1;nt--;}}
    for(int i=0;i<13;i++){
        if(P[i]==1) p--;
        if(K[i]==1) k--;
        if(H[i]==1) h--;
        if(T[i]==1) t--;}
    if(p==np && k==nk && h==nh && t==nt)
        printf("%d %d %d %d",p,k,h,t);
    else printf("GRESKA");
    return 0;}
