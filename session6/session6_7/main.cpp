#include <iostream>

using namespace std;

int main() {
    int arr[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }

    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << endl;
            cout << arr[j][i] << endl;
            cout << endl;
        }
    }

    int columnSums[3] = {0};
    int rowSums[3] = {0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            columnSums[i] += arr[j][i];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSums[i] += arr[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << "Sum of column " << i + 1 << ": " << columnSums[i] << endl << endl;
        cout << "Sum of row " << i + 1 << ": " << rowSums[i] << endl << endl;

    }

    return 0;
}

// 11, 22, 3
// 4, 15, 16
// 27, 8, 19
// 52, 45, 38

// arr[i]    [j]
// arr[satr][sotoon]
// arr[j][i]
// arr[sotoon][satr]
// 1 4 7
// 2 5 8
// 3 6 9

// 1 2 3
// 4 5 6
// 7 8 9