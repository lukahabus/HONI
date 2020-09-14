#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main()
{
    string s;
    int n;
    cin>>n;
    int o=n-1;
    int S[n];
    for(int i=0;i<n;i++)
        S[i]=0;
    while(n)
    {
        cin>>s;
        int t=0;
        if(isupper(s[0])){
            for(int i=0;i<s.length();i++)
                if(isdigit(s[i]))
                    t++;
        if(!t) S[n-1]++; }
        char c=s[s.length()-1];
        if(c=='?' || c=='.' || c=='!')
            n--;
    }
    for(o;o>=0;o--){
        cout<<S[o];
        if(o!=0) cout<<endl;}
    return 0;
}
