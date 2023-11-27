#include <iostream>
using namespace std;

int main() {
    int array [5];
    cout << "enter 5 values:" << endl;
    for(int i = 0; i < 5; i++) cin >> array[i];
    cout << "\nthe reverse output is: " << endl;
    for(int i = 4; i >= 0; i--)
    {
        cout << *(array + i) << endl;
    }
    return 0;
}
// 1 2 3 4 5 ---> 5 4 3 2 1