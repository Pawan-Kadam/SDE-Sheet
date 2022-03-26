/*

Inverted full pyramid using *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *

*/

#include <iostream>
using namespace std;

void printSpaces(int n)
{
    for (int i = 0; i < n; ++i)
    {
        cout << " ";
    }
}

int main()
{

    int n = 5;

    for (int row = n; row >= 1; --row)
    {
        int spaces = n - row;

        printSpaces(spaces);

        for (int col = 1; col < 2 * row; ++col)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
