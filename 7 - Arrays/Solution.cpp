#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N;

    // Check if N is valid
    if (N <= 0) {
        cout << "Invalid array size" << endl;
        return 1;
    }

    // Use vector instead of a variable-length array
    vector<int> arr(N);

    // Input the array elements
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Reverse the array using vector iterators
    reverse(arr.begin(), arr.end());

    // Output the reversed array
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
