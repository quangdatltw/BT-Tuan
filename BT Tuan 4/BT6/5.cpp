#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void print(int n, int sub,int constn,int constsub)
{
    if (n-sub==0)
    {
        cout << sub << endl;
        constsub--;
        if (constsub>0) print(constn,constsub,constn, constsub);
    }
    else
    {
        if (n-sub==1)
        {
            cout << sub << " ";
            cout << 1 << endl;
            constsub--;
            if (constsub>0) print(constn,constsub,constn, constsub);
        }
        else
        {
        cout << sub << " ";
        n = n-sub;
        while (n < sub-1)
        {
            sub--;
        }
        if (sub>1)
        print(n, sub-1,constn, constsub);
        else print(n, sub, constn, constsub);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    print(n,n,n, n);
}
