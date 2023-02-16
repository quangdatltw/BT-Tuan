#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int a=0,b=0,c=0;
	cin >> a; cout << a <<" ";
	while(c>=0)
	{
		b=a;
		cin >> a;
		if (b!=a) cout << a << " ";
		c=a;
	}
}

