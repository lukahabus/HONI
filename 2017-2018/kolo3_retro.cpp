#include<iostream>
using namespace std;

int r, s;
char P[100][100];
string sol = "";

void rek(int X, int Y, string z, int o){
    char c = P[X][Y];
    if(Y >= s || Y < 0 || X < 0 || c == '*')
        return;
    if(c == '(')
        o++;
    if(c == ')')
        o--;
    if(o < 0)
        return;
    if(c != '.')
        z += c;
    if(o == 0 && z.length() >= sol.length())
        sol = z;
    if(z.length() + X < sol.length())
        return;
  rek(X - 1, Y + 1, z, o);
  rek(X - 1, Y - 1, z, o);
  rek(X - 1, Y, z, o);
  return;
}

int main()
{

    cin >> r >> s;
    int x = r - 1, y;

    for(int i = 0; i < r; ++i)
        for(int j = 0; j < s; ++j){
            cin >> P[i][j];
        }
    for(int i = 0; i < s; ++i)
        if(P[x][i] == 'M')
            y = i;

    rek(x, y, "", 0);

    sol.erase(0, 1);

    cout << sol.length() << endl << sol;

    return 0;
}
