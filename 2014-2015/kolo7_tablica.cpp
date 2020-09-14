#include<cstdio>
#include<iostream>
using namespace std;

int r,s;

int pm()
{
  for(int i=0;i<s*2+1;i++){
    if(i%2==0) cout<<'+';
    else if(i%2==1) cout<<'-';}
    cout<<endl;
}

int oct()
{
  for(int i=0;i<s*2+1;i++){
    if(i%2==0) cout<<'|';
    else if(i%2==1) cout<<'.';}
    cout<<endl;
}

int main()
{
  cin>>r;
  cin>>s;
  pm();
  for(int i=0;i<r;i++){
    oct();
    pm();}

return 0;
}
