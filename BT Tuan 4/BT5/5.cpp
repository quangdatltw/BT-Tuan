#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
bool pri (int n)
{
    if ((n%2==0||n<2)&&n!=2) return false;
    else
    {
        for (int i=3;i<=sqrt(n);i=i+2)
        if (n%i == 0) return false;
    }
    return true;
}
int main()
{
    int n;
    cin >> n;
    for (int i=2 ; i<n ; i++)
    if (pri(i)) cout << i << " ";
}
