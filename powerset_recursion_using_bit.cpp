#include<iostream>
#include<vector>
using namespace std;

void powerWithBits(vector<int>& input) {
    int n = input.size();
    int totalSubsets = 1 << n;  // 2^n subsets

    cout << "Powerset:" << endl;
    // Generate all subsets using bit manipulation
    for (int mask = 0; mask < totalSubsets; mask++) {
        vector<int> subset;
        for (int i = 0; i < n; i++) {
            // If the i-th bit of mask is set, include input[i]
            if (mask & (1 << i)) {
                subset.push_back(input[i]);
            }
        }
        // Print the current subset
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
}

int main() {
    //vector<int> input = {1, 2, 3};  // Input set
    //powerWithBits(input);  // Generate the powerset using bit manipulation
    cout<<(1<<3);
    return 0;
}
