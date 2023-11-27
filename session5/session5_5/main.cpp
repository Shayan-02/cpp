#include <iostream>
using namespace std;

void swap(int *x, int *y);
int main() {
    int a, b;
    cout << "enter tow numbers: \n";
    cin >> a >> b;
    cout << "first value of a, b are: " << a << " and " << b << endl;
//    swap(&a, &b);
    swap(a, b);
    cout << "after swap, a, b are: " << a << " and " << b << endl;
    return 0;
}


void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}