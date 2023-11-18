#include <iostream>
using namespace std;

int boxVolume(int length = 1, int width = 1, int height = 1);
int main() {
    cout << "\nthe default box volume is: " << boxVolume();
    cout << "\nthe volume of a box with length 10,\n" << "width 1 and height 1 is: " << boxVolume(10);
    cout << "\nthe volume of a box with length 10,\n" << "width 5 and height 1 is: " << boxVolume(10, 5);
    cout << "\nthe volume of a box with length 10,\n" << "width 5 and height 2 is: " << boxVolume(10, 5, 2);
    cout << endl;
    return 0;
}

int boxVolume(int length, int width, int height)
{
    return length * width * height;
}