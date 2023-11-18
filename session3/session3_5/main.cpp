#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

enum Status { WON, LOST, CONTINUE };
int rollDice();
int main() {
    srand(time(NULL));
    int myPoint;
    enum Status gameStatus;
    int sum = rollDice();

    switch (sum) {
        case 7:
        case 11:
            gameStatus = WON;
            break;
        case 2:
        case 3:
        case 4:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            cout << "Point is: " << myPoint << endl;
            break;
    }

    while (CONTINUE == gameStatus) {
        sum = rollDice();

        if (sum == myPoint) gameStatus = CONTINUE;
        else if (sum == 2 || sum == 3 || sum == 4) gameStatus = LOST;
        else
            if (sum == 7 || sum == 11) gameStatus = WON;
    }

    if (WON == gameStatus) puts("player wins");
    else puts("player lost");

    return 0;
}

int rollDice()
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    cout << "player rolled " << die1 << " + " << die2 << " = " << die1 + die2 << endl;
    return die1 + die2;
}