#include<iostream>
using namespace std;

int main()
{
    int n, cnt = 2;
    cin >> n;
    char A[n];
    for(int i = 0; i < n; ++i)
        cin >> A[i];
    for(int i = 1; i < n; ++i)
        if(A[i] != A[i - 1])
            cnt++;
    cout << cnt;
    return 0;
}

