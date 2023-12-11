#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s1[] = "hello";
    char s2[] = "hi";

    strcpy(s1, s2);

    cout << s1 << " " << s2 << endl;
    return 0;
}
