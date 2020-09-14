#include<iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    string dan[7] = {"petak", "subota", "nedjelja", "ponedjeljak", "utorak", "srijeda", "cetvrtak"};
    int i = 0;
    for(; i < 7; ++i)
        if(a == dan[i])
            break;
    cout << 28 - i;
    return 0;
}

