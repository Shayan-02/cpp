#include <iostream>
#include <cmath>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    //      abs
    //      ceil
    //      floor
    //      sin / cos / tan
    //      sqrt
    //      round
    //      pow
    //      log10
    float x = -14.44;
    float y = 3;
    float z = 4;
    cout << "abs of x: " << abs(x) << endl;
    cout << "ceil of x: " << ceil(x) << endl;
    cout << "floor of x: " << floor(x) << endl;
    cout << "round of x: " << round(x) << endl;
    cout << "sqrt of x: " << sqrt(abs(x)) << endl;
    cout << "pow of y and z: " << pow(y, z) << endl;
    cout << "max and min pow of y and z: " << pow(max(y, z), min(y, z)) << endl;
    cout << "log of x: " << log(abs(x)) << endl;
    cout << "sin of x: " << sin(0) << endl;
    cout << "cos of x: " << sin(0) << endl;
    cout << "tan of x: " << tan(0) << endl;
    cout << "********************************" << endl;
    cout << "test text";
    Sleep(2000);
    system("cls");
    cout << setw(12) << "hi";
    return 0;
}
