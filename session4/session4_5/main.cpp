#include <iostream>
using namespace std;

int main() {
    int n, array[n], i, count_negative = 0, count_positive = 0;
    cout << "enter the array size: ";
    cin >> n;
    int number[n];
    cout << "enter " << n << " numbers and press enter: " << endl;

    for (i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "\nnegatives are: ";
    for (i = 0; i < n; i++){
        if (array[i] < 0){
            cout << array[i] << "   ";
            count_negative++;
        }
    }
    cout << "\npositives are: ";
    for (i = 0; i < n; i++){
        if (array[i] > 0){
            cout << array[i] << "   ";
            count_positive++;
        }
    }
    cout << "\nnumber of negatives: " << count_negative << endl;
    cout << "\nnumber of positives: " << count_positive << endl;
    return 0;
}
