#include<iostream>
#include<vector>
using namespace std;

int main()
{
    long long int n,x,k,maxi=0,sol=1,maxsol=0,multi,maxk;
    vector<long long int> vec;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x>maxi) maxi=x;
        vec.push_back(x);}
    if(maxi>=100000) maxi=100000;
    for(k=0;k<=maxi;k++){
        sol=1;
        multi=vec[0];
        for(int i=1;i<n;i++){
            if(vec[i]>vec[i-1]) multi+=k;
            if(vec[i]<vec[i-1]) multi-=k;
            if(multi==vec[i]) sol++;
        }
        if(sol>=maxsol) {maxsol=sol;maxk=k;}
    }
    cout<<maxsol<<endl<<maxk;
return 0;
}
