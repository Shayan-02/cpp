#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int *p;
    cout << "value of p: " << p << endl;
    cout << "size of p: " << sizeof p << " bytes" << endl;
    cout << "address of p: " << &p << endl;

    p = nullptr;
    cout << "value of p: " << p << endl;
    cout << "size of p: " << sizeof(p) << " bytes" << endl;
    cout << "address of p: " << &p << endl;

    int *p1 = nullptr;
    float *p2 = nullptr;
    double *p3 = nullptr;
    long long *p4 = nullptr;
    string *p5 = nullptr;
    vector <string> *p6 = nullptr;

    cout << "size of p1: " << sizeof p1 << " bytes" << endl;
    cout << "size of p2: " << sizeof p2 << " bytes" << endl;
    cout << "size of p3: " << sizeof p3 << " bytes" << endl;
    cout << "size of p4: " << sizeof p4 << " bytes" << endl;
    cout << "size of p5: " << sizeof p5 << " bytes" << endl;
    cout << "size of p6: " << sizeof p6 << " bytes" << endl;
    return 0;
}
