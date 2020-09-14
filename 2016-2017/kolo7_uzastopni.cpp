#include<iostream>
using namespace std;

#define lli long long int
//vjerojatno dinamika

lli n;

int sumaniza(int a, int b)
{
    return (b - a + 1) * (a + b) / 2;
}

int main()
{
    cin >> n;
    if(n < 200500)
        for(int i = 1; i < n; ++i)
            for(int j = i + 1; j < i + 500; ++j) {
                if(sumaniza(i, j) > n || sumaniza(i, j + 500) < n)
                    continue;
                //cout << i << " " << j << " " << sumaniza(i, j) << endl;
            if(sumaniza(i, j) == n)
                cout << i << " " << j << endl;
            }
    return 0;
}
