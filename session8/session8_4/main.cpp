#include<iostream>
using namespace std;
int main()
{
    double x[3][4];
    int i, j;
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            cin >> x[i][j];
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            cout << x[j][i] << " ";
    cout << endl;
    }
}