#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int main()
{
	int a;
	cin >> a;
	if ((a%4==0 &&a%100!=0) || (a%400==0)) cout << "true"; else cout <<"false";
}

