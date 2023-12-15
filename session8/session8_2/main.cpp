#include<iostream>
using namespace std;
int main()
{
    string p;
    int n = 0, i, has;
    for(;;)
    {
    cin >> p;
    if(p == "finish") break;
    has = 0;
    for(i = 0; i<p.length(); i++)
        if(p[i] >= '0' && p[i] <= '9')
        {
            has = 1;
            break;
        }
        if(has == 1) n++;
    }
        cout << n << endl;
}
