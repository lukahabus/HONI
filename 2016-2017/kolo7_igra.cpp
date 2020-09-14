#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n], b[n];
    string sol;
    cin >> a >> b;
    sort(a, a + n);
    do{
        bool f = true;
        for(int i = 0; i < n; ++i)
            if(a[i] == b[i]) {
                f = false;
                continue;
            }
        if(f) {
            sol = a;
            break;
        }
    }while(next_permutation(a, a + n));

    cout << sol;
    return 0;
}
