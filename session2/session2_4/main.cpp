#include <iostream>
using namespace std;

char Convert(char);
int main() {
    char ch;
    cout << "enter a character: ";
    cin >> ch;

    cout << "result of " << ch << " is " << Convert(ch) << endl;
    return 0;
}

char Convert(char ch) {
    if (ch >= 'a' && ch <= 'z') ch -= 32;
    else if (ch >= 'A' && ch <= 'Z') ch += 32;
    return ch;
}