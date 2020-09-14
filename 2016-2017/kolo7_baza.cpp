#include<iostream>
using namespace std;

int A[1000][1000];
int B[50], sol[1000];
int n, m, q;

int upit(int B[])
{
    int r = 0;
    for(int i = 0; i < n; ++i) {
        bool f = true;
        for(int j = 0; j < m; ++j)
            if((B[j] != -1) && (A[i][j] != B[j]))
                f = false;
        if(f)
           r++;
    }
    return r;
}

int main()
{
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> A[i][j];
    cin >> q;
    for(int i = 0; i < q; ++i) {
        for(int j = 0; j < m; ++j)
            cin >> B[j];
        sol[i] = upit(B);
    }
    for(int i = 0; i < q; ++i)
        cout << sol[i] << endl;
    return 0;
}
