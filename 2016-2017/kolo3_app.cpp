#include<iostream>
using namespace std;

int main()
{
    int a,b,sol;
    cin>>a>>b;
    if(a>b)
    {
        cin>>a>>b;
        sol=min(a,b);
        cin>>a>>b;
    }
    else
    {
        cin>>a>>b>>a>>b;
        sol=min(a,b);
    }
    cout<<sol;
    return 0;
}
