#include<cstdio>
using namespace std;

int main()
{
    int a,b,c,d,s=0;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    if(a+c==b+d) {
        if(a<c)
            s=(a+c)-a;
        else s=(a+c)-c;
    }
    if((a<b) || (c<d)){
        s=a+d;
    }
    if((a>b) || (c>d)){
        s=b+c;
    }
    if((a>b) || (c<d)){
        s=b+c;
    }
    if((a<b) || (c>d)){
        s=a+d;
    }
    printf("%d",s);
    return 0;
}
