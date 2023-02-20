#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	double a,b,c;
	cin >> a>> b >> c;
	double d=(a+b+c)/2.00;
	cout << sqrt(d*(d-a)*(d-b)*(d-c));
}

