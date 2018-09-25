// C Program to Swap two Numbers

#include <iostream>

using namespace std;

// Main
int main()
{
    int x = 10;
    int y = 20;
    int tmp;

    cout << "x = " << x << " and y = " << y << endl;

    tmp = x;
    x = y;
    y = tmp;

    cout << "Now x = " << x << " and y = " << y << endl;

    return 0;
}