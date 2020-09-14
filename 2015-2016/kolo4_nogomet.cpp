#include<iostream>
using namespace std;

int main()
{
    int n,b,m=1001;
    cin>>n;
    for(int i=2;i<=n/2;i++)
        if(n%i==0) {b=n/i;
        if(b<m) m=b;}
    if(m==1001) m=n;
    cout<<m;
}
