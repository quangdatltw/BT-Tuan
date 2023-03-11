#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;
int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    int count_first_five = count_even(arr, 5);
    int count_last_five = count_even(arr + size - 5, 5);

    std::cout << "Number of even elements in first five: " << count_first_five << std::endl;
    std::cout << "Number of even elements in last five: " << count_last_five << std::endl;

    return 0;
}
