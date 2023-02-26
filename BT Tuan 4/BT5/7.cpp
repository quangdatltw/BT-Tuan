#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void print(int m, int n)
{
    if (m>0)
    {
        cout << " ";
        print(m-1,n);
    }
    else
    if (n>0)
    {
        cout << "*";
        print(m,n-1);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i=n ; i>=0 ; i--)
    {
        print(i,n*2-1-i*2);
        cout << endl;
    }
}
