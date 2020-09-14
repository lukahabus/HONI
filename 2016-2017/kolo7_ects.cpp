#include<iostream>
using namespace std;

int main()
{
    int u, p;
    cin >> u >> p;
    if(p < 30)
        cout << 8400;
    else if(p >= 30 && p < 55)
        cout <<(u - p) * 140;
    else cout << 0;
    return 0;
}
