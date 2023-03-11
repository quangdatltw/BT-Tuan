#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int* weird_sum(int a, int b)
{
    int c;
    c = a + b;
    return &c;
}
int main()
{
     int *pX = NULL;
     cout << pX << endl;
     cout << *pX << endl;
     cout << *weird_sum(5,3);
     *pX = 0;
     return 0;
}
