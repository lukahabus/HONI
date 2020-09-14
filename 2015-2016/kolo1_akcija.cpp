#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,s=0;
    cin>>n;
    int N[n];
    for(int i=0;i<n;i++){
        cin>>N[i]; s+=N[i];}
    sort(N,N+n);
    reverse(N,N+n);
    for(int i=2;i<n;i+=3)
        s-=N[i];
    cout<<s;
}
