#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int N,inv=0,s=0,r,maxi,temp=0;
    cin>>N;
    int a[N],b[N];
    for(int i=0;i<N;i++){
        cin>>a[i];s+=a[i];}

    while(s>0){
    for(int i=0;i<N;i++){
        b[i]=a[i];}
    sort(b,b+N);
    maxi=b[N-1];
    for(int i=0;i<N;i++)
        if(a[i]==maxi) r=i;
    for(int i=0;i<N;i++)
        if(a[i]+1==maxi && i>r) {s-=a[i];a[i]=0;maxi--;}
    s-=a[r];
    a[r]=0;
    inv++;}
    cout<<inv;
    return 0;}
