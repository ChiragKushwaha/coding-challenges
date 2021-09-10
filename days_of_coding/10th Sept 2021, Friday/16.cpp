// 16.           1
//             1   1
//           1   2   1
//         1   3   3   1
//       1   4   6   4   1

#include <iostream>

using namespace std;

int main()
{
    int t = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j < 5 - i; j++)
        {
            cout << " ";
        }
        int k = t;
        while (k > 0)
        {
            int rem = k % 10;
            k /= 10;
            cout << rem << " ";
        }

        t *= 11;
        cout << endl;
    }
    return 0;
}