#include<iostream>
using namespace std;

int main()
{
    int m,s;
    cin>>m>>s;
    if(m<4) m=7-m;
    if(s<4) s=7-s;
    if(m<s) cout<<"slavko";
    else if(m>s) cout<<"mirko";
    else cout<<"nerijeseno";
    return 0;
}
