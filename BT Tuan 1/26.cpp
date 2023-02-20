#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int n;
	cin >> n;
	double A[n], minn, maxx, summ=0;
	for (int i=0 ; i<n; i++)
	{
		cin >> A[i];	
		if (i==0) { minn = A[i]; maxx=A[i]; summ=summ+A[i];}
		else
		{
			maxx=max(A[i],maxx);
			minn=min(A[i],minn);
			summ = summ + A[i];
		}
	}	
	cout << "Ave:" << summ/double(n) << endl << "max: " << maxx << endl << "min: " << minn << endl;
}	

