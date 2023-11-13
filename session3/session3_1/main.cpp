#include <iostream>
using namespace std;

void test();
int main() {
    register int i;
    for (i = 0; i < 5; i++) test();
    return 0;
}

void test(void){
    int x = 0;
    static int y = 0;

    cout << "\nauto x = " << x << "\nstatic y = " << y << "\n";
    x++;
    y++;
}