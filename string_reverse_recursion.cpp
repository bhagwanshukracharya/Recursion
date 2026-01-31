#include<iostream>
#include<algorithm>
using namespace std;

void reverse(string &a, int s, int e) {
    if (s >= e) return;  // Base case: if indices cross, stop
    swap(a[s], a[e]);    // Swap the elements
    reverse(a, s + 1, e - 1);  // Recurse with updated indices
}

int main() {
    string are = "babbar";
    int n = 6;

    reverse(are, 0, n - 1);  // Start the reversal with the whole array

    // Print the reversed array
    for (int i = 0; i < n; i++) {
        cout << are[i] << "  ";
    }
    return 0;
} 