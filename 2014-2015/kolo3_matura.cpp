#include<cstdio>
using namespace std;

int main()
{
    int s,m,d,s1,s2,s3,m1,m2,m3,p,k;
    scanf("%d %d",&s,&m);
    scanf("%d",&d);
    scanf("%d %d",&s1,&m1);
    scanf("%d %d",&s2,&m2);
    scanf("%d %d",&s3,&m3);
    p=s*60+m+30;
    k=s*60+m+d-15;

    if((s1*60+m1)<=(s*60+m+d/2+1)){
    if((s1*60+m1)<p)
        printf("NE\n");
    else printf("DA\n"); }
    if((s1*60+m1)>=(s*60+m+d/2+1)){
        if((s1*60+m1)<k)
            printf("DA\n");
        else printf("NE\n"); }

    if((s2*60+m2)<=(s*60+m+d/2+1)){
    if((s2*60+m2)<p)
        printf("NE\n");
    else printf("DA\n"); }
    if((s2*60+m2)>=(s*60+m+d/2+1)){
        if((s2*60+m2)<k)
            printf("DA\n");
        else printf("NE\n"); }

    if((s3*60+m3)<=(s*60+m+d/2+1)){
    if((s3*60+m3)<p)
        printf("NE\n");
    else printf("DA\n"); }
    if((s3*60+m3)>=(s*60+m+d/2+1)){
        if((s3*60+m3)<k)
            printf("DA\n");
        else printf("NE\n"); }

    return 0;
}
