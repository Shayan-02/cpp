#include <iostream>
using namespace std;

unsigned int fact(int);
int main() {
    int number;
    cout << "enter a positive integer: ";
    cin >> number;

    cout << "\nnumber : " << number << " and factorial is : " << fact(number) << "\n";
    return 0;
}

unsigned int fact(int x){
    if (x != 0) return (x * fact(x - 1));
//    5 * fact(4) ---> 5 * 4 * fact(3) ---> 5 * 4 * 3 * fact(2) ---> 5 * 4 * 3 * 2 * fact(1) --->5 * 4 * 3 * 2 * 1 = 120
    return 1;
}