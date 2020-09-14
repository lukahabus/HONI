#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, g, mx = 0;
    cin >> n >> m >> k;

    int M[m];
    memset(M, 0, sizeof(M));

    for(int i = 0; i < n; ++i){
        cin >> g;
        M[g - 1]++;
        mx = max(M[g - 1], mx);
        for(int j = 1; j < m; ++j)
            cin >> g;
    }

    for(int i = 0; i < m; ++i)
        if(M[i] == mx){
            g = i + 1;
            cout << i + 1;
            break;
        }

    cout << endl;

    if(g == k)
        cout << 0;
    else
        cout << m - 1;

    return 0;
}
