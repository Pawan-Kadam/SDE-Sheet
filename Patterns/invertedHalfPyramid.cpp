/*

Inverted half pyramid using *
* * * * *
* * * *
* * *
* *
*

Inverted half pyramid using numbers
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

#include <iostream>
using namespace std;

void star(int n)
{
    for (int row = 1; row <= n; ++row)
    {
        for (int col = n; col >= row; --col)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void star2(int n)
{
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= n + 1 - row; ++col)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void number1(int n)
{
    for (int row = 1; row <= n; ++row)
    {
        int k = 1;
        for (int col = n; col >= row; --col)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}

void number2(int n)
{
    for (int row = n; row >= 1; --row)
    {

        for (int j = 1; j <= row; ++j)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n = 5;
    star(n);
    star2(n);
    number1(n);
    number2(n);

    return 0;
}
