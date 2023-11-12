#include <iostream>
using namespace std;

void maximum(int num1, int num2, int num3) {
    int max;
    max = (num1 > num2) ? num1 : num2;
    max = (num3 > max) ? num3 : max;

    cout << "\n max is: " << max << endl;
}

int main(){
    int x, y, z;

    cout << "enter number1: ";
    cin >> x;
    cout << "enter number2: ";
    cin >> y;
    cout << "enter number3: ";
    cin >> z;

    maximum(x, y, z);


    return 0;
}

