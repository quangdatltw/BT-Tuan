#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void print(int n, int k,int i, string S)
{
        S=S+char(i);
        if (k>0)
        for ( i+1 ; i<97+n ; i++)
        print(n,k-1,i+1,S);
        else cout << S << endl;
}
int main()
{
    int n,k;
    string S;
    cin >> n >> k;
    n--;
    for (int i=97 ; i<97+n ; i++)
    print(n,k-1,i,S);
}
