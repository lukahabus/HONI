#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string broj;
    string r="";
    int n,x=0,y=0;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
        cin>>s[i];
    cin>>broj;
    for(int i=0;i<broj.length();i++){
        if(broj.find('2')<1001) r+="abc";
        if(broj.find('3')<1001) r+="def";
        if(broj.find('4')<1001) r+="ghi";
        if(broj.find('5')<1001) r+="jkl";
        if(broj.find('6')<1001) r+="mno";
        if(broj.find('7')<1001) r+="pqrs";
        if(broj.find('8')<1001) r+="tuv";
        if(broj.find('9')<1001) r+="wxyz";}
    for(int i=0;i<n;i++){
            for(int j=0;j<s[i].length();j++)
                if(r.find(s[i].at(j))<1001) x++;
            if(x==s[i].length()) y++; x=0;}
    cout<<y;
}
