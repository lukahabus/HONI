#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

unsigned GCD(unsigned u, unsigned v) {
    while ( v != 0) {
        unsigned r = u % v;
        u = v;
        v = r;
    }
    return u;
}

int abeceda[26];

int main()
{
    vector <int> rijeci;
    vector <char> rijecii;
    string rijec;
    cin>>rijec;

    for(int i=0;i<rijec.size();i++)
        abeceda[rijec[i]-'a']++;
    for(int i=0;i<26;i++)
        if(abeceda[i]!=0) {rijeci.push_back(abeceda[i]); rijecii.push_back(i+'a');}

    int G=rijeci[0];

    for(int i=0;i<rijeci.size();i++)
    {
        G=GCD(G,rijeci[i]);
    }

    if(G==1) {cout<<"-1"; return 0;}

    int c=rijec.size()/G;

    for(int i=0;i<c;i++)
        cout<<rijec[i];

    //for(int i=0;i<rijeci.size();i++)
        //rijeci[i]/=G;

    //for(int i=0;i<rijeci.size();i++)
        //for(int j=0;j<rijeci[i];j++)
            //cout<<rijecii[i];


    return 0;
}
