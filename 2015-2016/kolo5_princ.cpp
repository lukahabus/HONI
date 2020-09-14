#include<iostream>
#include<cstring>
using namespace std;

string D[7]={"ponedjeljak","utorak","srijeda","cetvrtak","petak","subota","nedjelja"};

int main()
{
    int s,a,b,x;
    string d;
    cin>>s>>a>>b>>d;
    for(int i=0;i<7;i++)
        if(d==D[i]) x=i-a;
    for(s;s>0;s-=b)
        x+=a;
    x%=7;
    cout<<D[x];
}
