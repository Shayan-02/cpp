#include <iostream>
using namespace std;
int main() {
    int b[] = {10, 20, 30, 40};
    int *bPtr = b;

    cout << "array b printed with:\narray subscript notation\n";

    for(int i = 0; i < 4; i++) cout << "b[" << i << "] = " << b[i] << endl;
    cout << "\npointer/offset notation where " << "the pointer is array name\n";
    for(int offset1 = 0; offset1 < 4; offset1++) cout << "*(b + " << offset1 << ") = " << *(b + offset1) << endl;
    cout << "\npointer subscript notation" << endl;
    for(int j = 0; j < 4; j++) cout << "bPtr[" << j << "] = " << bPtr[j] << endl;
    cout << "\npointer offset notation" << endl;
    for(int offset2 = 0; offset2 < 4; offset2++) cout << "*(bPtr + " << offset2 << ") = " << *(bPtr + offset2) << endl;

    return 0;
}
