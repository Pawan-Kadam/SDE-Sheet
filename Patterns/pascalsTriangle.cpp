/*

Print Pascal's Triangle.
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1

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

void pascalsTriangle(int n)
{
    for (int row = 1; row <= n; row++)
    {
        int c = 1;
        int spaces = n - row;

        printSpaces(spaces);

        for (int col = 1; col <= row; col++)
        {
            cout << c << " ";
            c = c * (row - col) / col;
        }
        cout << endl;
    }
}

int main()
{

    int n = 5;
    pascalsTriangle(n);

    return 0;
}
