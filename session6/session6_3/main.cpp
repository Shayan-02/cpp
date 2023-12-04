#include <iostream>
using namespace std;

int main() {
    int number[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> number[i];
    }
    for (int i = 9; i >= 0; i--) {
        cout << number[i] << " ";
    }
    return 0;
}
