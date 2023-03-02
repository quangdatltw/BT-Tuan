#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int rnd1 ( double a )
{
    if ( int(floor(a*10))%10 >=5) return ceil(a);
    else return floor(a);
}

int rnd2 ( double a )
{
    string s = to_string(a);
    for (int i = 0 ; i< s.length() ; i++)
    if (s[i]=='.')
    {
        if (s[i+1] >= '5')
        {
            int A=0;
            for (int j = 0 ; j<i ; j++)
            A = A*10 + (s[j]-'0');
            A++;
            return A;
        }
        else
        {
            int A=0;
            for (int j = 0 ; j<i ; j++)
            A = A*10 + (s[j]-'0');
            return A;
        }
    }
    return int(a);
}
int main()
{
    double a;
    cin >> a;
    cout << rnd1(a) << " " << endl
         << rnd2(a);
}
