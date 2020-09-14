#include<iostream>
using namespace std;

int main()
{
    int x,n,p;
    cin>>x>>n;
    int sol=(n+1)*x;
    for(int i=0;i<n;i++)
    {
        cin>>p;
        sol-=p;
    }
    cout<<sol;
    return 0;
}
