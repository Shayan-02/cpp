#include <iostream>
using namespace std;

int main() {
    int number = 5;
    cout << "value is: " << number << endl;
    cout << "size is: " << sizeof(number) << " bytes" << endl;
    cout << "address is: " << &number << endl;

    int *ptr = nullptr;
    ptr = &number;
//    int *ptr = &number
    cout << "value is: " << ptr << endl;
    cout << "size is: " << sizeof(ptr) << " bytes" << endl;
    cout << "address is: " << &ptr << endl;

    ptr = nullptr;
    cout << "value is: " << ptr << endl;
    return 0;
}

