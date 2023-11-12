#include <iostream>
using namespace std;

int x;
void f1();
void f2();
int main() {
    x = 500;
    f1();
    f2();
    cout << "\nin main x is : " << x << endl;
    return 0;
}

void f1() {
    cout << "in f1 x is : " << x << endl;
}

void f2(void) {
    int x;
    cout << "in f2 x changes : " << endl;
    for (x = 1; x < 5; x++) cout << "x : " << x << endl;
}