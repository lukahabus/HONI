#include<iostream>
using namespace std;

int main()
{
    int n,p=0,sol=0;
    cin>>n;
    int kut[n][5];
    for(int i=0;i<n;i++)
        for(int j=0;j<5;j++)
            cin>>kut[i][j];
    for(int i=0;i<n;i++){
            int b=0;
        for(int j=0;j<5;j++)
            b+=kut[i][j];
        if(b>=40 && b<=50) p++;
            else sol++;
    }
    if(p==n) cout<<"PAULA";
    else cout<<sol;
    return 0;
}
