#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main()
{
    string n,m,nule;
    vector<int> nn,mm;
    long long int nnn=0,mmm=0,p;
    cin>>n>>m;
    int r=abs(n.size()-m.size());
    int N=n.size(),M=m.size();
    int ms=max(N,M);
    if(r>0) {
        for(int i=0;i<r;i++)
            nule+='0';
        if(N>M) m=nule+m;
        else n=nule+n;}

    for(int i=0;i<ms;i++){
        if(n[i]-'0'>m[i]-'0') {nn.push_back(n[i]-'0');}
        else if(n[i]-'0'<m[i]-'0') {mm.push_back(m[i]-'0');}
        else if(n[i]-'0'==m[i]-'0') {nn.push_back(n[i]-'0');mm.push_back(m[i]-'0');}
}
    if(nn.empty()) cout<<"YODA";
    else
    while(nn[0]==0 && nn.size()>1)
      nn.erase(nn.begin()+0);
    for(int i=0;i<nn.size();i++)
        cout<<nn[i];
cout<<endl;
    if(mm.empty()) cout<<"YODA";
    else
    while(mm[0]==0 && mm.size()>1)
      mm.erase(nn.begin()+0);
    for(int i=0;i<mm.size();i++)
        cout<<mm[i];
}
