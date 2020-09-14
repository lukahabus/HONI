#include<bits/stdc++.h>
using namespace std;

int n;

int fix(int a[],int start,int ende,int ans)
{
	if(start==ende)
	{       if(a[start]==ende)
		{      ++ans;
			return 1;}
		else
		{return 0;}
	}
	int mid=(ende+start)/2;
	int j=fix(a,start,mid,ans);
	int k=fix(a,mid+1,ende,ans);
	return(j+k);
}

int main()
{
    int t, sol = 0;
	cin>>n;
	int reta = 1, retb = n;
	int a[n];
	for(int i = 0; i < n; ++i)
        cin >> t, a[i] = t - 1;

for(int p = 0; p < n; ++p)
    for(int k = p; k < n; ++k)
    {
        int b[n];
        for(int i = 0; i < n; ++i)
            b[i] = a[i];
        for(int i = p; i <= k; ++i)
            b[i] = a[k - i];

        sol = max(sol, fix(b,0,n-1,0));
        if(fix(b,0,n-1,0) >= sol)
        {
            reta = a[p] + 1;
            retb = a[k] + 1;
        }
        if(sol == n)
            break;
    }

	cout << reta << " " << retb;

	return 0;
}
