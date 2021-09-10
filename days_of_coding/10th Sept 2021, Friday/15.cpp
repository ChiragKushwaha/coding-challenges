// 15.      *
//         * *
//        *   *
//       *     *
//      *       *
//       *     *
//        *   *
//         * *
//          *

#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + c; j++)
        {
            if (j == 1 || j == i + c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        c = c + 1;
        cout << endl;
    }
    c = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 9; j >= c; j--)
        {
            if (j == 9 || j == c)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        c += 2;
        cout << endl;
    }

    return 0;
}