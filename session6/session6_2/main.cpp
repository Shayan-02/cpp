#include <iostream>
using namespace std;

int main() {
    int number[10];
    int max_number;
    int min_number;
    int min_counter = 0, max_counter = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Enter number " << i + 1 << " : ";
        cin >> number[i];
        if (number[i] > max_number) {
            max_number = number[i];
        }
        if (number[i] < min_number) {
            min_number = number[i];
        }
    }
    for (int i = 0; i < 10; i++) {
        if (number[i] == max_number) {
            max_counter++;
        }
        if (number[i] == min_number) {
            min_counter++;
        }
    }
    cout << "your max number is " << max_number << " and your min number is " << min_number << endl;
    cout << "your max number occurs " << max_counter << " times and your min number occurs " << min_counter << " times" << endl;

    return 0;
}

