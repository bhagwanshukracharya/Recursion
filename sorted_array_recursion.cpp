#include <iostream>
using namespace std;

bool check(int arr[], int n) {
    if (n == 1) return true;     // Only 1 element → sorted

    if (arr[0] <= arr[1]) {
        return check(arr + 1, n - 1); // Trim array and reduce size
    } else {
        return false;
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 11, 8, 9, 10};

    if (check(arr, 10))
        cout << "true";
    else
        cout << "false";

    return 0;
}
