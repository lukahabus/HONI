#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n,trebam,imam,sol=0,maxE=0;
    string maxP,pokemon;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>pokemon;
        cin>>trebam>>imam;
        int evolved=0;
        while(imam>=trebam)
        {
            evolved++;
            imam=imam-trebam+2;
        }
        if(evolved>maxE) maxP=pokemon;
        maxE=max(maxE,evolved);
        sol+=evolved;
    }
    cout<<sol<<endl<<maxP;
    return 0;
}

