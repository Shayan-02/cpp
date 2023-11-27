#include <iostream>
using namespace std;

int main() {
    int num1 = 10;
    int num2 = 20;
    int *p1 = &num1;

    cout << "address of num1: " << &num1 << endl;
    cout << "value of p1: " << p1 << endl;
    cout << "value of num1: " << num1 << endl;
    cout << "value of variable that pointing to (content op p1): " << *p1 << endl;
    
    return 0;
}
