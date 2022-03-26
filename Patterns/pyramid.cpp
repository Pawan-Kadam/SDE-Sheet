/*

Program to print full pyramid using *
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *

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

void star(int n)
{
  for (int row = 1; row <= n; ++row)
  {
    int spaces = n - row;

    printSpaces(spaces);

    for (int col = 1; col <= 2 * row - 1; ++col)
    {
      cout << "*";
    }

    cout << endl;
  }
}

int main()
{

  int n = 5;
  star(n);

  return 0;
}
