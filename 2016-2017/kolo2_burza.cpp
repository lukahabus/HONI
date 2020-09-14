#include<iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    for(int i=0;i<n-1;i++)
        cin>>a>>b;
    if(n&1) cout<<"NE";
    else cout<<"DA";
}
