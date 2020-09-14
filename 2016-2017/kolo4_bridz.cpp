#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sol=0;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        for(int j=0;j<13;j++)
        {
            if(s[j]=='A') sol+=4;
            else if(s[j]=='K') sol+=3;
            else if(s[j]=='Q') sol+=2;
            else if(s[j]=='J') sol++;
        }
    }
    cout<<sol;
}
