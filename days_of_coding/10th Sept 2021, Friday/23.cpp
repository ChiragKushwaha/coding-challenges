// 23.        *      *
//          *   *  *   *
//        *      *      *

#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    int n = 3;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
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
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i + c; j++)
        {
            if ((j == 1 && i != n) || j == i + c)
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

        cout << endl;
    }

    return 0;
}