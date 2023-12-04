#include <iostream>
using namespace std;
int main()
{
    int number[5];
    int Max;

    cout << "Please enter 5 numbers." << endl;
    for ( int i = 0 ; i < 5 ; i++ )
    {
    cin >> number[i];
    }
    int Min = number[0];
    for ( int i = 0; i < 5 ; i ++)
    {
    if (number[i] > Max){
    Max = number[i];
    }
    }
    for ( int i = 0; i < 5 ; i ++)
    {
    if (number[i] < Min){
    Min = number[i];
    }
    }
    cout << Max << endl;
    cout << Min << endl;

    return 0;
}

// {1, 2, 0, 5, 3}
// min = 1
// min = 0