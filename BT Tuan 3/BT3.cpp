#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int N,summ=0;
	cin >> N;
	vector <int> A(N);
	for (int i=0 ; i < N ; i++)
	cin >> A[i];
	
	sort(A.begin(), A.end());
	for (int i=0 ; i < N ; i++)
	summ = summ + A[i]*(N-i);
	
	cout << summ;
}

