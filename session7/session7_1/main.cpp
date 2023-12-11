#include <iostream>
#include <conio.h>
using namespace std;

int Counter(char * , char);
int main() {
    char str[50], ch;
    int count;

    cout << "Enter string for search : ";
    gets(str);

    cout << "Enter a character : ";
    ch = getch();
//    cin >> ch;

    count = Counter(str, ch);

    cout << "\n\nNumber of occurs of char " << ch << " is : " << count << endl << endl;

    return 0;
}
int Counter(char *s , char letter) {
    int count = 0;

    while (*s)
        if (*s++ == letter)
            count++;

    return (count);
}