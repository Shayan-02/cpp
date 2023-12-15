#include <iostream>
using namespace std;

int main() {
    int x, y, m = 0;
    cin >> x;
    y = x;
    for(; y > 0; y /= 10)
        m = m * 10 + y % 10;
    cout << (x * m) << endl;
    return 0;
}
