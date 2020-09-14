#include<cstdio>
#include<iostream>
using namespace std;

int main()
{
    int k, n, m;
    scanf("%d", &k);
    for(int i = 0; i < k; ++i){
        scanf("%d %d", &n, &m);
        printf("%d\n", (min(n, m) - 1) * 2);
    }
    return 0;
}
