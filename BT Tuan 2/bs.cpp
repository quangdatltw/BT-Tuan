#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int Fac(int x)
{
	if (x==1||x==0) return 1;
	else return Fac(x-1)+x;
}

int main()
{
	string S;
	cin >> S;
	int b = S.length();
	int dem=1;
	int k=1;
	string A[Fac(b-1)+1];
	for (int i=0 ; i < b-1 ; i++)
	for (int j=i+1 ; j < b ; j++)
	{
		string SS=S;
		SS.erase(SS.begin() + i);
		SS.erase(SS.begin() + (j-1));
		if (i==0 && j==1)A[k]=SS;
		else
		{
			for (int l = 0 ; l < k; l++)
			if (A[l]==SS) break; else if (l+1==k) {A[k]=SS;dem++;}
		}
		k++;
	}
	cout << dem << endl;
	
	return 0;
}

