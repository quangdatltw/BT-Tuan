#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
char * weird_string()
{
    char c[] = "13546";
    return c;
}
int main()
{
    char *c = weird_string();
    cout << "warning: address of local variable 'c' returned [-Wreturn-local-addr]" ;
    cout << *c << endl;
    cout << &c << endl;

}
