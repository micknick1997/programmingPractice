#include <iostream>

using namespace std;

//C Program to print Floyd’s triangle
int triangle(int rows)
{
    int i, j, val = 1;
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            val++;
            cout << val << " ";
        }
        cout << endl;
    }
}

// main
int main()
{
    triangle(6);
    return 0;
}