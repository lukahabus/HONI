#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,hindx=1;
    cin>>n;
    int r[n+5];
    for(int i=0;i<n;i++)
        cin>>r[i];
    sort(r,r+n);
    for(int i=0;i<n;i++){
        int num=n-i;
        if(r[i]>=num){
            hindx=num;
            break;
        }
    }
    cout<<hindx;
    return 0;
}
