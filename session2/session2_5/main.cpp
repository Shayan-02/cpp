#include <iostream>
using namespace std;

int prime(int);
int main() {
    int number;
    char answer;

    while (true) {
        cout << "enter a number: ";
        cin >> number;

        if(prime(number)) cout << "\nnumber " << number << " is prime" << endl;
        else cout << "number " << number << " is not prime" << endl;

        cout << endl << "do you want to continue? ";
        cin >> answer;

        if (answer != 'y') break;
    }
    return 0;
}

int prime(int number){
    int temp = 1;
    for(int i = 2; (i <= number/2) && temp ;  i++)
        if (number % i == 0) temp = 0;
    return temp;
}