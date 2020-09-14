#include<iostream>
using namespace std;

int main()
{
    int n,d,g,h,sol=0;
    cin>>n>>d>>g;
    for(int i=0;i<n;i++)
    {
        cin>>h;
        if(h>g || h<d) sol++;
    }
    cout<<sol;
    return 0;
}
