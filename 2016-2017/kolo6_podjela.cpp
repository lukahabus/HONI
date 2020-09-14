#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,b,cnt=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>b;
        if(b%m==0 && b>=m)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
