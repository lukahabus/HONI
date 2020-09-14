#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    int n,m,k,x;
    string r,abeceda="abcdefghijklmnopqrstuvwxyz";
    cin>>n>>m>>k>>x;
    char S[k];
    x--;
    cin>>r;
    for(int i=0;i<m;i++)
        for(int j=0;j<k;j++)
        {
            cin>>S[j];
        }
    if(m==1)
    {
        sort(S,S+k);
    for(int i=0;i<n;i++)
    {
        if(r[i]=='#') r[i]=S[x%k];
    }
    cout<<r;
    }
    else {
        for(int i=0;i<n;i++)
            if(r[i]=='#') r[i]=abeceda[i%26];
        cout<<r;
    }
    return 0;
}
