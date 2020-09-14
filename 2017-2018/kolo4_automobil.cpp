#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;

    long long int M[n][m], sol = 0;

    if(n > 1000)
        return 0;

    int c = 0;

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j){
            ++c;
            M[i][j] = c;
        }
            //M[i][j] = i * (n + 1) + j + 1;

    char RS;
    int koji, skolko;

    for(int i = 0; i < k; ++i){
        cin >> RS >> koji >> skolko;
        koji--;
        if(RS == 'R')
            for(int j = 0; j < m; ++j)
                M[koji][j] *= skolko;
        else
            for(int j = 0; j < n; ++j)
                M[j][koji] *= skolko;
    }

    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            sol += M[i][j];

    cout << sol % 1000000007;
    return 0;
}
