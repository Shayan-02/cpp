#include <iostream>
using namespace std;

int main() {
    int *a, *b, sum;
    a = new int;

    if(!a)
    {
        cout << "\nallocation failure\n";
        exit(1);
    }

    b = new int;
    if(!b)
    {
        cout << "\nallocation failure\n";
        exit(1);
    }

//    cout << "enter tow numbers: \n";
//    cin >> a, b;
    cout << "Enter number1: ";
    cin >> *a;
    cout << "Enter number2: ";
    cin >> *b;
    sum = *a * *a + *b * *b;
    cout << "sum of squares is: " << sum << endl;

    delete a;
    delete b;
    return 0;
}
