#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int gcd(int a,int b)
{
if (b==0) return a;
else return gcd(b,a%b);
}
string cgcd(int a,int b)
{
    if (gcd(a,b)==1) return "true";
    else return "false";
}

int main()
{
    int a,b;
    cin >> a >> b;
    cout << gcd(a,b) << " " << cgcd(a,b) ;
}
