#include <iostream>
using namespace std;

int Fib(int);
int main() {
    int n;
    cout << "enter number of sentence : ";
    cin >> n;

    for (int i = 1; i <= n; i++) cout << Fib(i) << "\t";
    return 0;
}

int Fib(int n){
    if (n == 1) return 0;
    else if (n == 2) return 1;
    else if (n == 3) return 1;
    return Fib(n - 1) + Fib(n - 2);
}
// f : 0 1 1 2 3 5 8 13 21 34