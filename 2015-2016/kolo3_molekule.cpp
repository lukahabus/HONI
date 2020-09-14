#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x[n],a[n],b[n],y[n];
    for(int i=0;i<n;i++){
        x[i]=0;
        y[i]=0;}
    for(int i=0;i<n-1;i++){
        cin>>a[i]>>b[i];
        x[a[i]-1]++;
        x[b[i]-1]++;}
    for(int i=0;i<n-1;i++){
        if(x[a[i]-1]<x[b[i]-1]) y[i]=1;
        else if(x[a[i]-1]>x[b[i]-1]) y[i]=0;}
    sort(x,x+n);
    if(x[n-1]==x[n-2]){for(int i=0;i<n-1;i++){ if(i!=0) cout<<endl; cout<<0;} return 0;}
    for(int i=0;i<n-1;i++){
        if(i!=0) cout<<endl;
        cout<<y[i];}
}
