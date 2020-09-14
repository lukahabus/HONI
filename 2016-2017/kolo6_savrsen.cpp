#include <bits/stdc++.h>
using namespace std;

#define k 4

int power(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}

bool miillerTest(int d, int n)
{
    int a = 2 + rand() % (n - 4);

    int x = power(a, d, n);

    if (x == 1  || x == n-1)
       return true;

    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;

        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
    return false;
}

bool isPrime(int n)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;

    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;

    for (int i = 0; i < k; i++)
         if (miillerTest(d, n) == false)
              return false;

    return true;
}

int djelitelji(int x)
{
    if(isPrime(x)) return 1;
    int sum=0;
    for(int i=1;i<=x/2;i++)
        if(x%i==0) sum+=i;
    return sum;
}

int main()
{
    int a,b,cnt=0;
    cin>>a>>b;
    int n=b-a+1;
    int sumaniza=n*(2*a+n-1)/2;
    for(a;a<=b;a++)
        cnt+=djelitelji(a);
    cout<<abs(sumaniza-cnt);
    return 0;
}
