#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

bool check(string A[], int i, int j)
{
	string S = A[i], SS=A[j];
	if (S.length()!=SS.length()) return false;
	for ( int k=0 ; k<S.length() ; k++ )
	if (S[k]!=SS[S.length()-1-k]) return false;
	else if (k==(S.length()-1)/2) return true;
	return false;
	
}
int main()
{
	/////////////////////////////////////////////
	//BAI Password
	int n;
	cin >> n;
	string A[n];
	for ( int i=0 ; i<n ; i++ )
	cin >> A[i];
	
	for ( int i=0 ; i<n ; i++ )
	for ( int j=i+1 ; j<n ; j++ )
	if (check(A,i,j)) 
	{
		cout << A[i].length() << " ";
		cout << A[i][A[i].length()/2];
	}
}

