#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

int main()
{
    int n,sol=0;
    string s;
    char B;
    scanf("%d %c",&n,&B);
    for(int i=0;i<4*n;i++){
        cin>>s;
        if(s[0]=='A') sol+=11;
        if(s[0]=='K') sol+=4;
        if(s[0]=='Q') sol+=3;
        if(s[0]=='J' && s[1]==B) sol+=20;
        if(s[0]=='J' && s[1]!=B) sol+=2;
        if(s[0]=='T') sol+=10;
        if(s[0]=='9' && s[1]==B) sol+=14;
    }
    cout<<sol;
    return 0;
}
