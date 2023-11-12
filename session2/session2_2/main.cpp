#include <iostream>
using namespace std;

void sample(int, int);
int main() {
    int x, y;
    cout << "enter x: ";
    cin >> x;
    cout << "enter y: ";
    cin >> y;

    cout << "main : x: " << x << "\n" << "main y: " << y << endl;

    sample (x, y);

    cout << "x: " << x << "\n" << "y: " << y << endl;

    return 0;
}

void sample(int x, int y) {
    cout << "recive: x " << x << "\n" << "recive : y: " << y << endl;

    x *= 5;
    y -= 5;

    cout << "new x: " << x << "\n" << "new y: " << y << endl;
}