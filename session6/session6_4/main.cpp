#include <iostream>

using namespace std;

void findLargestThree(int arr[], int n) {
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max3 = max2;
            max2 = arr[i];
        } else if (arr[i] > max3) {
            max3 = arr[i];
        }
    }

    cout << "The three largest elements are: " << max1 << ", " << max2 << ", and " << max3 << endl;
}

int main() {
    int arr[] = {10, 4, 17, 25, 8, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    findLargestThree(arr, n);

    return 0;
}
