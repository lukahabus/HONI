#include<iostream>
using namespace std;

int main()
{
    int n,s,k;
    cin>>n>>s>>k;
    s*=k;
    if(n==s && k==2) cout<<"Odlicno";
    else if(n==s && k!=2) cout<<"Lose";
    else if(s>n || n-s==1) cout<<"Lose";
    else cout<<"Dobro";
    return 0;
}
