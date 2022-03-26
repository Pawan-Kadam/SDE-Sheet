/*

Program to print half pyramid using *
*
* *
* * *
* * * *
* * * * *

Program to print half pyramid a using numbers
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

*/

#include <iostream>
using namespace std;

void star(int n)
{
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void number(int n)
{
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout << col << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n = 5;
    star(n);
    number(n);

    return 0;
}
