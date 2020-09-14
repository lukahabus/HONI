#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a1,a2,b1,b2;
    cin>>a1>>a2>>b1>>b2;
    if(b1<a1 || b1> a2) cout<<b1;
    else cout<<b2;
    return 0;
}
