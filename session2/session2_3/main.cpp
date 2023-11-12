#include <iostream>
using namespace std;

float area (float r) {
    float s;

    s = r * r * 3.14;
    return s;
}

int main() {
    float r, s;
    cout << "enter the radius: ";
    cin>> r;
// s = area---> s
    s = area(r);

    cout << "\narea = " << s << "\n";
    return 0;
}

