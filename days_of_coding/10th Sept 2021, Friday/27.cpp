// 27.   1 2 3 4  17 18 19 20
//         5 6 7  14 15 16
//           8 9  12 13
//             10 11

#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int counter = 1;
    int rcounter = n * (n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        int r = rcounter - (n - i - 2);
        for (int j = 0; j < i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * (n - 1) - 2 * i; j++)
        {
            if (j < n - i - 1)
            {
                cout << counter << " ";
                counter++;
            }
            else
            {
                cout << r << " ";
                r++;
            }
        }
        rcounter = rcounter - (n - i - 1);
        cout << endl;
    }

    return 0;
}