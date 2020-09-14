#include<iostream>
using namespace std;

int main()
{
    int D[5];
    for(int i=0;i<5;i++)
        cin>>D[i];
    for(int i=0;i<5;i++){
        if(D[i]&1) {cout<<"normalna"; return 0;}}
    cout<<"savrsena";
    return 0;
}
