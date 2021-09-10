// 17.      1
//         212
//        32123
//       4321234
//        32123
//         212
//          1

#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5 - i; j++)
        {
            cout << "  ";
        }
        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        for (int l = 2; l <= i; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 5 - i - 2; k >= 1; k--)
        {
            cout << k << " ";
        }
        for (int l = 2; l <= 5 - i - 2; l++)
        {
            cout << l << " ";
        }
        cout << endl;
    }

    return 0;
}