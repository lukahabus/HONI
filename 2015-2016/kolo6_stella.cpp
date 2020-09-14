#include<iostream>
using namespace std;

int main()
{
    int n,sol=0;
    int zn[4];
    cin>>n;
    zn[0]=n/1000;
    zn[1]=n/100%10;
    zn[2]=n/10%10;
    zn[3]=n%10;
    for(int i=0;i<4;i++)
        if(zn[i]%2==0) sol+=zn[i];
    cout<<sol;
    return 0;
}
