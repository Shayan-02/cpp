#include <iostream>
using namespace std;

void simple();

int main() {
    simple();
    return 0;
}

void simple () {
    int hour, minute, second, time;
    cout << "enter hour:";
    cin>> hour;
    cout<< "minute:";
    cin>> minute;
    cout<< "second:";
    cin>> second;
    time = (hour * 3600) + (minute * 60) + second;
    cout << time;
}