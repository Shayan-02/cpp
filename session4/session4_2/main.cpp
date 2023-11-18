#include <iostream>
using namespace std;

int number = 7;
int number2 = 5;

int main() {
    double number = 10.5;
    int number2 = 8;
    cout << "local double value of number: " << number2 << endl;
    cout << "global int value of number: " << ::number2 << endl;
    return 0;
}
