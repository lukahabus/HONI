#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, sol = 0;
    cin >> n >> m >> k;

    int s, e, lp;
    bool a[n];
    memset(a, 0, sizeof(a));

    int poz[m];
    for(int i = 0; i < m; ++i){
        cin >> poz[i];
        poz[i]--;
    }

    for(int i = 0; i < m; ++i){
        s = (poz[i] - k) < 0 ? 0 : (poz[i] - k);
        e = (poz[i] + k) > n - 1 ? n - 1 : (poz[i] + k);
        for(s; s <= e; ++s)
            a[s] = 1;
    }

    for(int i = 0; i < n; ++i)
        if(a[i] == 0)
        {
            sol++;
            e = (i + k * 2) > n - 1 ? n - 1 : (i + k * 2);
            for(; i <= e; ++i)
                a[i] = 1;
        }

    cout << sol;

    return 0;
}
