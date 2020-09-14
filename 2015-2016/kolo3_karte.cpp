#include <iostream>
using namespace std;

int main()
{
    string v,b;
    int q;
    cin>>v>>b>>q;
    string V[q],B[q];
    int a[q],c[q];
    for(int i=0;i<q;i++){
        cin>>V[i]>>B[i];
        if(V[i]==v) a[i] = 1;
        else a[i] = 0;
        if(B[i]==b) c[i] = 1;
        else c[i] = 0;
}
    for(int i=0;i<q;i++){
        if(i!=0) cout<<endl;
        cout<<a[i]<<c[i];}
}
