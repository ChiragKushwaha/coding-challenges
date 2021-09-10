// 24.    *        *
//        **      **
//        * *    * *
//        *  *  *  *
//        *   **   *
//        *   **   *
//        *  *  *  *
//        * *    * *
//        **      **
//        *        *

#include <iostream>

using namespace std;

int main()
{

    for (int i = 1; i < 10; i++)
    {

        if (i < 5)
        {
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                    cout << "*";
                else
                    cout << " ";
            }

            for (int j = 5; j > i; j--)
            {
                cout << "  ";
            }
            for (int j = 1; j <= i; j++)
            {
                if (j == 1 || j == i)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        else
        {
            for (int j = 0; j < 10 - i; j++)
            {
                if (j == 0 || j == 10 - i - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            for (int j = 1; j <= i - 5; j++)
            {
                cout << "  ";
            }
            for (int j = 0; j < 10 - i; j++)
            {
                if (j == 0 || j == 10 - i - 1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}