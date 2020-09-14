#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x[n], y[n];
    for(int i = 0; i < n; ++i)
        cin >> x[i];
    for(int i = 0; i < n; ++i)
        cin >> y[i];
    sort(x, x + n);
    sort(y, y + n);
    int i = 0;
    for(; i < n; ++i)
        if(x[i] > y[i]){
            cout << "NE";
            break;}
    if(i == n)
        cout << "DA";
    return 0;
}
