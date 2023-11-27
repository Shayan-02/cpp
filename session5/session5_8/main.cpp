#include <iostream>
using namespace std;

int main() {
    int a[5];
    int *p = a;
    cout << a[5] << endl;
    cout << &a[5] << endl;

    cout << *(p+4) << endl;
    cout << (p+4) << endl;
    return 0;
}
