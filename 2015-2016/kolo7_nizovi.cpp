#include<iostream>
#include<cstring>
using namespace std;

int razmaci(int uv)
{
    for(int i=0;i<uv;i++)
        cout<<" ";
}

int main()
{
    string s;
    cin>>s;
    int vel=s.size();
    int u=0;
    for(int i=0;i<vel;i++)
    {
        if(s[i]=='{') {  razmaci(u); cout<<s[i]; cout<<endl; u+=2; }
        else if(s[i]=='}') {  u-=2; razmaci(u); cout<<s[i]; if(s[i+1]==',') cout<<s[i+1]; else if(s[i+1]=='}') cout<<endl; }
        else {
            if(s[i-1]=='{' || s[i-1]==',' || s[i-1]=='}') razmaci(u);
            if(s[i]==',' && s[i-1]!='}') cout<<','<<endl;
            else if(s[i-1]=='}') cout<<endl;
            else if(s[i+1]=='{' || s[i+1]=='}') cout<<s[i]<<endl;
            else cout<<s[i];
        }
    }
return 0;
}
