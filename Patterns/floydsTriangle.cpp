/*

Print Floyd's Triangle.
1
2 3
4 5 6
7 8 9 10

*/

#include <iostream>
using namespace std;

void floydsTriangle(int n)
{
    int k = 1;
    for (int row = 1; row <= n; ++row)
    {
        for (int col = 1; col <= row; ++col)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}

int main()
{
    int n = 5;

    floydsTriangle(4);

    return 0;
}
