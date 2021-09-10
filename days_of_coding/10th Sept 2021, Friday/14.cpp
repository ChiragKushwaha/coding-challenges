// 14.  *********
//       *     *
//        *   *
//         * *
//          *

#include <iostream>

using namespace std;

int main()
{
    int c = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 9; j >= c; j--)
        {
            if (j == 9 || j == c || i == 1)
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