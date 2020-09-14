#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    char M[n][m];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>M[i][j];
    string s="";
    int i=0, j=0;
    s+=M[i][j];
    n--; m--;
    while(1)
    {
        if(M[i+1][j] < M[i][j+1] && i!=n)
            i++;
        else if(M[i][j+1] < M[i+1][j] && j!=m)
            j++;
        else if(i==n) j++;
        else i++;
        s+=M[i][j];
        if(i==n && j==m) break;
    }
    cout<<s;
}
