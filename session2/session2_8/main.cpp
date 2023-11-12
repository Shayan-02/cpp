#include <iostream>
using namespace std;

unsigned long fact(int);
int main() {
    int number;
    cout << "enter a positive integer: ";
    cin >> number;

    cout << "\nnumber : " << number << " and factorial is : " << fact(number) << "\n";
    return 0;
}

unsigned long fact(int x){
    if (x != 0) return (x * fact(x - 1));
    return 1;
}