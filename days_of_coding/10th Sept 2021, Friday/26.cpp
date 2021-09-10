// 26.   1 1 1 1 1 1
//       2 2 2 2 2
//       3 3 3 3
//       4 4 4
//       5 5
//       6

#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}