#include<iostream>
using namespace std;

int main()
{
    int s, m, n;
    cin >> s >> m >> n;
    if(m + n >= 60)
        s++;
    cout << s << " " << (m + n) % 60;
    return 0;
}
