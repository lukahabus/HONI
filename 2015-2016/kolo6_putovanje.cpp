#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,c,x,sol=0,maxi=0,j,zb=0;
    vector<int> vec;
    cin>>n>>c;
    for(int i=0;i<n;i++){
        cin>>x;
        vec.push_back(x);}
    for(int i=0;i<n;i++)
    {
        sol=0;
        for(j=i;j<n;j++){
            sol+=vec[j];
            if(sol>c) break;}
        if(j-i>maxi) maxi=j-i;
    }
    cout<<maxi;
    return 0;
}
