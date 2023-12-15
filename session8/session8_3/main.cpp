#include<iostream>
using namespace std;
int main()
{
    string p[5];
    int i;
    for(i = 0; i < 5; i++)
        cin >> p[i];
    cout << "\n";
    for(i = 0; i < 5; i++)
        if(p[i][0] == p[i][p[i].length() - 1])
            cout << p[i] << endl;
}