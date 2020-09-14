#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    string s, x, y;
    cin >> s;
    int n, a, b, c, d;
    cin >> n;
    while(n--)
    {
        cin >> a >> b >> c >> d;
        x = s.substr(a - 1, b - a + 1);
        y = s.substr(c - 1, d - c + 1);
        sort(x.begin(), x.end());
        sort(y.begin(), y.end());
        if(x == y)
            cout << "DA";
        else cout << "NE";
        cout << endl;
    }
    return 0;
}


