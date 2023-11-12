#include <iostream>
using namespace std;

int num, sqr, sum;

void input (void);
void square (void);
int main() {
    cout << "\nenter 3 number:\n";
    for (int i = 0; i < 3; i++) input();
    cout << "\nsum of square is : " << sum << "\n";
    return 0;
}

void input(){
    cin >> num;
    square();
    sum += sqr;
}

void square(){
    sqr = num * num;
}
