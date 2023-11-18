#include <iostream>
using namespace std;

int square(int x);
double square(double y);
int main() {
    cout << square(7) << "\n";
    cout << square(7.5) << "\n";
    return 0;
}

int square(int x)
{
    cout << "square of integer " << x << " is ";
    return x * x;
}

double square(double y)
{
    cout << "square of double " << y << " is ";
    return y * y;
}