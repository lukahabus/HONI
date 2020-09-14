#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,k,c,sol=0;
    cin>>n;
    for(int i=0;i<5;i++){
        cin>>k>>c;
        if(c<=n)
            sol=max(sol,k);}
    cout<<sol;
return 0;
}
