#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,p,x;
    cin>>n>>k>>p;
    for(int i=0;i<n;i++){
        cin>>x;
        k-=x/p;}
    if(k>0) cout<<"DA";
    else cout<<"NE";
return 0;
}

