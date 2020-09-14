#include<iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>x>>n;
    int s=(n*(n+1))/2+n;
    cout<<x-s;
}
