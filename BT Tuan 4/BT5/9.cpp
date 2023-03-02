#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int randd(int n)
{
    int a = rand();
    if (a>n) return a%n; else return n-a;
}
int main()
{
    srand(time(NULL));
    int n;
    cin >> n;
    cout << randd(n);
}
