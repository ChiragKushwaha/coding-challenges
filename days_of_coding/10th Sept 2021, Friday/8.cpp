// 8.      *
//        ***
//       *****
//      *******
//     *********

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
            cout << "*";
        }
        c = c + 1;
        cout << endl;
    }

    return 0;
}