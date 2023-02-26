#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void print(string n, string m, int pos)
{
    int longg = pos;
    while(pos!=0)
    {
        swap(n[pos],n[pos-1]);
        pos--;
        if (n!=m)cout << n <<endl;

    }
    if (n!=m)
    {
        return print(n, m, longg);
    }
}
int main()
{
    string n,m;
    cin >> n;
    m=n;
    int nlong = n.length();
    print(n, m, nlong-1);
}
