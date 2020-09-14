#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==1)
        for(int i=1;i<=n*n;i++)
            if(i%n==0 && i!=n*n) cout<<i<<endl;
                else cout<<i<<" ";
    else cout<<"-1";
}
