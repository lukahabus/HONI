#include<bits/stdc++.h>
using namespace std;

void ispis(string tipkovnica)
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<8;j++)
            cout<<tipkovnica[i*8+j];
        if(i!=3) cout<<endl;
    }
}

int main()
{
    string tip="***ABCDEFGHIJKLMNOPQRSTUVWXYZ***";
    string sol="********************************";
    int n;
    cin>>n;
    vector<string> S;
    string s;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        S.push_back(s);
    }
    cin>>s;
    for(int i=0;i<n;i++)
    {
        int t=0;
        for(int j=0;j<s.size();j++)
            if(s[j]==S[i][j]) t++;
        if(t==s.size())
            sol[tip.find(S[i][s.size()])]=S[i][s.size()];
    }
    ispis(sol);
    return 0;
}
