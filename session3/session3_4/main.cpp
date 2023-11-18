#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

int main() {
    int x = 5;
    char ch;

    cout << "enter any key" << endl;
    while(ch = getch())
    {
        cout << "\n";
        srand(time(NULL));
        for (int j = 1; j <= 10; j++)
        {
            cout << (rand() % 20) << setw(10);
            if (j % 5 == 0) cout << "\n";
        }
        cout << "enter any key to continue" << endl;
    }
    return 0;
}
