#include <cstdio>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

void rword (char *word)
{
int len = rand () % 14 + 1;
word [len] = 0;
while (len) word [--len] = 'a' + rand () % 26;
}

int main ()
{
    int a,b,n;
    cin>>a>>b;
    n=min(a,b);
	char word[n];
	int x=0;
	srand(time(0));
	while (x<n)
	{
	  rword(word);
	  cout << word << ' ';
	  x++;
	}
}
