#include<iostream>
using namespace std;

int main()
{
    int r,s,g,m;
    cin>>r>>s>>g>>m;
    int sol=r*s*g;
    if(sol>m) cout<<0;
    else cout<<sol;
    return 0;
}
