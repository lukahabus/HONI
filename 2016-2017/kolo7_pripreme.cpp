#include<iostream>
using namespace std;

int main()
{
    int n, k, sol = 0;
    cin >> n;
    int A[n];
    for(int i = 0; i < n; ++i)
        cin >> A[i];
    cin >> k;
    for(int i = 0; i < n; ++i)
        if(A[i] <= k)
            ++sol;
    cout << sol;
    return 0;
}
