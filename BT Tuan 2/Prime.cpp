#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
string pri (int n)
{
    if ((n%2==0||n<2)&&n!=2) return "No"; 
    else
    {
        for (int i=3;i<=sqrt(n);i=i+2)
        if (n%i == 0) return "No";
    }
    return "Yes";
}
int main()
{
	int n;
	cin >> n;
	cout << pri(n);
}

