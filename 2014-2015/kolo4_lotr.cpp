#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int a,b,c,d,e,najvise,najmanje,s;
    scanf("%d", &a);//Prstenova druzina
    scanf("%d", &b);//Dvije kule
    scanf("%d", &c);//Povratak kralja
    scanf("%d", &d);//min
    scanf("%d", &e);//max

    if(min(min(a,b),c)==a)
        a+=d;
    if(min(min(a,b),c)==b)
        b+=d;
    if(min(min(a,b),c)==c)
        c+=d;
    if(max(max(a,b),c)==a)
        a+=e;
    if(max(max(a,b),c)==b)
        b+=e;
    if(max(max(a,b),c)==c)
        c+=e;

    najvise=max(max(a,b),c);
    najmanje=min(min(a,b),c);
    s=(a+b+c)-najvise-najmanje;


    if(najvise==a){
        cout<<"Prstenova druzina"<<endl;}

    if(najvise==b){
        cout<<"Dvije kule"<<endl;}

    if(najvise==c){
        cout<<"Povratak kralja"<<endl;}

    if(s==a){
        cout<<"Prstenova druzina"<<endl;}

    if(s==b){
        cout<<"Dvije kule"<<endl;}

    if(s==c){
        cout<<"Povratak kralja"<<endl;}

    if(najmanje==a){
        cout<<"Prstenova druzina"<<endl;}

    if(najmanje==b){
        cout<<"Dvije kule"<<endl;}

    if(najmanje==c){
        cout<<"Povratak kralja"<<endl;}
return 0;
}

