#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
void f(int* arr, size_t size)
{
    size = sizeof(arr);
    cout << "Size of array inside function f: " << size << endl;
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    size_t size = sizeof(A);
    cout << "Size of array A: " << size << endl;
    f(A, size);
    cout << "sizeof(arr) co gia tri la 8 bytes => la kich thuoc con tro" << endl << endl;

    vector <int> AA(20,5);
    size = sizeof(AA);
    int* pAA = &AA[0];
    cout << "Size of array AA: " << size << endl;
    cout << "Size of vector la const va = 24 bytes" << endl;
    f(pAA, size); cout << endl;

    int *AAA = new int[10]{1,2,3,4,5,6,7,8,9,10};
    size = sizeof(AAA);
    cout << "Size of array AAA: " << size << endl;
    cout << "Size of Dynamic array tra ve kich thuoc con tro" << endl;
    f(AAA, size);
    return 0;
}
