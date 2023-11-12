#include <iostream>
using namespace std;

int Fib(int);
int main() {
    int n;
    cout << "enter number of sentence : ";
    cin >> n;

    for (int i = 0; i < n; i++) cout << Fib(i) << "\t";
    return 0;
}

int Fib(int n){
    if (n == 1 || n == 0) return 1;
    return Fib(n - 1) + Fib(n - 2);
}