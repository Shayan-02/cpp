#include <iostream>
#include <string>
using namespace std;
int main() {
    //#include <iostream>
    //#include <string>
    //using namespace std;
    //int main() {
    //    int op;
    //    int x = 6;
    //    int y = 7;
    //    cin >> op;
    //    switch (op) {
    //        case 1:
    //            cout << x +y;
    //            break;
    //        case 2:
    //            cout << x-y;
    //            break;
    //        case 3:
    //            cout << x*y;
    //            break;
    //        case 4:
    //            cout << x/y;
    //            break;
    //
    //    }
    //// Outputs "Thursday" (day 4)
    //
    //    return 0;
    //}
    bool x = false;
    // Outputs "Thursday" (day 4)
    for (int i = 0; i < 10; i++) {
        if (i == 4) {
            continue;
        }
        if (i == 8){
            break;
        }
        cout << i << endl;
    }
    return 0;
}
