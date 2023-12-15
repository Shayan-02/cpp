#include <iostream>
#include <unordered_set>

using namespace std;

int firstRepeatingElement(int arr[], int n) {
    unordered_set<int> seen;
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            return arr[i];
        }
        seen.insert(arr[i]);
    }

    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 4, 5,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    int firstRepeated = firstRepeatingElement(arr, n);
    if (firstRepeated == -1) {
        cout << "No repeating element found" << endl;
    } else {
        cout << "First repeating element: " << firstRepeated << endl;
    }

    return 0;
}