#include <iostream>

using namespace std;

int main() {
    int number[10];
    int sum, avg = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Enter number " << i << ": ";
        cin >> number[i];
        sum = sum + number[i];
    }
    avg = sum / 10;
    cout << "Average: " << avg << endl;
    for (int i = 1; i < 11; i++) {
        if (number[i] > avg) {
            cout << number[i] << " is greater than average" << endl;
        }
    }
    return 0;
}
