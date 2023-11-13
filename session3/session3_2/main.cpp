#include <iostream>
using namespace std;

void f(int, int&);
int main() {
    int x , y;

    cout << "x: ";
    cin >> x;
    cout << "y: ";
    cin >> y;

    f(x, y);

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;
    return 0;
}
void f(int a, int &b) {
    a += 2;
    b += 2;
}