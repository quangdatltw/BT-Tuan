#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int n;
	cin >> n;
	int A[n],B[n+1];
	for (int i=0 ; i<n ; i++)
	{
		cin >> A[i];
		for (int j=i; j>0; j--)
		if (A[j]<A[j-1]) swap(A[j],A[j-1]);
		
	}
	for (int i=0 ; i<=n ; i++)
	{
		cin >> B[i];
		for (int j=i; j>0; j--)
		if (B[j]<B[j-1]) swap(B[j],B[j-1]);
	}
	/*for (int i=0 ; i<=n ; i++)
	cout << B[i] << " ";
	cout << endl;
	for (int i=0 ; i<n ; i++)
	cout << A[i] << " ";*/
	
	for (int i=0 ; i<n ; i++)
	{
		if (A[i]!=B[i]) {cout << B[i]; break;}
		if (A[n-1-i]!=B[n-i]) {cout << B[n-i]; break;}
	}
	
}

