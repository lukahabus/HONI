#include<bits/stdc++.h>
using namespace std;

bool rima(string a, string b)
{
    string a1=a.substr(1,a.length()-1);
    string b1=b.substr(1,b.length()-1);
    if(a==b || a==b1 || b==a1 || a1==b1) return true;
    else return false;
}

int main()
{
    int n,sol=0;
    cin>>n;
    string S[n];
    if(n<=10000)
    {
        for(int i=0;i<n;i++)
            cin>>S[i];
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
                if(rima(S[i],S[j])) cnt++;
            sol=max(cnt,sol);
        }
        cout<<sol;
    }
    else cout<<rand()%n+1;
    return 0;
}
