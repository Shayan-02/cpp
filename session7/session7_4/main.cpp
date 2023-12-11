#include <iostream>
using namespace std;

int main() {
    char arr[20];
    cin >> arr;
    cin.getline(arr, 20, 't');
//    cin.getline(arr, 20, '\n');
    cout << arr[0] << "\t" << arr[1] << endl;
    return 0;
}
