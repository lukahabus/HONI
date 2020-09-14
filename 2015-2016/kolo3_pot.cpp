#include <iostream>
#include <cmath>
using namespace std;

int n,q=1,r,p;
long long int a,s=0,y=1;

int potenciranje()
{
    y=1;
    while(q!=0){
    q=n/2;
    r=n%2;
    if(r==1) y=y*a;
    n=q;
    a=a*a;}
    return y;
}

int main()
{
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a;
        n=a%10;
        a=a/10;
    potenciranje();
    q=1;
    s+=y;}
    cout<<s;
}

