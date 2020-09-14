#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,l,cnt=0;
    cin>>n>>l;
    int c,p;
    cin>>p;
    p=0;
    for(int i=1;i<n;i++)
    {
        cin>>c;
        if(c==0)
        {
            if(i-p>=l) cnt++, p=i;
        }
        else p=i;
    }
    cout<<cnt;
    return 0;
}
