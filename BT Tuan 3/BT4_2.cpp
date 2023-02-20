#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int T;
	cin >> T;
	for (int z=0 ; z<T ; z++)
	{
		int n,sumi=0,sumj=0;
		cin >> n;
		int A[n];
		for (int i=0 ; i<n ; i++)
		cin >> A[i];
		int i=0;
		int j=n-1;
		while(i<j)
		{
			if (sumi == sumj || sumi+A[i] == sumj+A[j])
			{
				sumi += A[i];
				sumj += A[j];
				i++;
				j--;	
			}
			else if (sumi < sumj)
			{
				sumi += A[i];
				i++;
			}
			else
			{
				sumj += A[j];
				j--;
			}
		}
		if (i==j&&sumi==sumj) cout <<"YES"<<endl; else cout <<"NO" <<endl;
		
	}
}

