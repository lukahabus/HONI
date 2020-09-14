#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    string abc="abcdefghijklmnopqrstuvwxyz";
    string key=abc;
    int n;
    cin>>n;
    vector<string> S(n),S2(n);
    int A[n];
    for(int i=0;i<n;i++)
        cin>>S[i];
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
        S2[A[i]-1]=S[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<S2[i].length();j++)
            key[abc.find(S[i][j])]=abc[abc.find(S2[i][j])];
    if(S==S2) cout<<"NE";
    else {
        cout<<"DA";
        cout<<endl<<key;
    }
    return 0;
}


