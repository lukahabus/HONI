#include<iostream>
using namespace std;

int main()
{
    int n, m, k;
    cin >> n >> m >> k;
    int X[k], Y[k], s[k];
    int P[n][m];
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            P[i][j] = 100000;
    for(int i = 0; i < k; ++i)
    {
        cin >> X[i] >> Y[i] >> s[i];
        int t = 1, ispunjeno = 0;
        int x = Y[i] - 1;
        int y = X[i] - 1;
        int p = 1;
        if(s[i] == 0){
            while(ispunjeno < n * m)
            {
                for(int u = 1; u < 5; u++)
                {
                    for(int f = 0; f < p; ++f)
                    {
                        if(x >= 0 && x < n && y >= 0 && y < m){
                            P[x][y] = min(t, P[x][y]);
                            ispunjeno++;
                        }
                        t++;
                        if(u % 4 == 1)
                            y--;
                        else if(u % 4 == 2)
                            x++;
                        else if(u % 4 == 3)
                            y++;
                        else if(u % 4 == 0)
                            x--;
                    }
                    if(u % 2 == 0)
                        p++;
                }
            }
        }
        else{
            while(ispunjeno < n * m)
            {
                for(int u = 1; u < 5; u++)
                {
                    for(int f = 0; f < p; ++f)
                    {
                        if(x >= 0 && x < n && y >= 0 && y < m){
                            P[x][y] = min(t, P[x][y]);
                            ispunjeno++;
                        }
                        t++;
                        if(u % 4 == 1)
                            y--;
                        else if(u % 4 == 2)
                            x--;
                        else if(u % 4 == 3)
                            y++;
                        else if(u % 4 == 0)
                            x++;
                    }
                    if(u % 2 == 0)
                        p++;
                }
            }
        }
    }
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j)
            cout << P[j][i] << " ";
        cout << endl;
    }
    return 0;
}
