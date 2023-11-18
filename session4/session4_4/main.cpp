#include <iostream>
using namespace std;
template <class T>
T maximum(T value1, T value2, T value3)
{
    T maximumValue = value1;
    if (value2 > maximumValue) maximumValue = value2;
    if (value3 > maximumValue) maximumValue = value3;
    return maximumValue;
}
int main() {
    int x, y, z;
    cout << "enter three values" << endl;
    cin >> x >> y >> z;
    cout << "maximum value is: " << maximum(x, y, z);
    return 0;
}
