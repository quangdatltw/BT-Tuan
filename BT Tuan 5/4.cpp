#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int* binary_search(int* begin, int* end, int value) {

    int* mid = begin + (end - begin) / 2;

    if (*mid == value) {
        return mid;
    } else if (*mid < value) {
        return binary_search(mid + 1, end, value);
    } else {
        return binary_search(begin, mid-1, value);
    }
}

int main() {
    int arr[] = {1, 3, 4, 6, 8, 9, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int value ;
    cin >> value;
    int* index = binary_search(arr, arr + size, value);
    int loc = index - arr;
    cout << "Found " << value << " at index " << loc << endl;

    return 0;
}



