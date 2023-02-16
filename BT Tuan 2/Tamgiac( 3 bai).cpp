#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int n;
	cin >> n;
	for (int i=n ; i>=0 ; i--)
	{
		for (int j=n-i ; j>0 ; j--)
		cout << " ";
		for (int k=i ; k>0 ; k--)
		cout <<"*";
		cout << endl ;
	}
	
	for (int i=0 ; i<n ; i++)
	{
		for (int j=1 ; j<n*2 ; j++)
		if (j>=(n-i) && j<=(n+i)) cout << "*"; else cout <<" ";
		cout << endl;
	}
	
	cout << endl;
	
	for (int i=n-1 ; i>=0 ; i--)
	{
		for (int j=n*2-1 ; j>=1 ; j--)
		if (j>=(n-i) && j<=(n+i)) cout << "*"; else cout <<" ";
		cout << endl;
	}
}

