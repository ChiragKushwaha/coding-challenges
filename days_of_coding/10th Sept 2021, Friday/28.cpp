// 31.      4 4 4 4 4 4 4
//          4 3 3 3 3 3 4
//          4 3 2 2 2 3 4
//          4 3 2 1 2 3 4
//          4 3 2 2 2 3 4
//          4 3 3 3 3 3 4
//          4 4 4 4 4 4 4

#include <iostream>

using namespace std;

int main()
{
    int n = 8;
    int s = n / 2;
    int minus = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n - 1)
                cout << s << " ";
            else
            {
                if (j <= i)
                {
                    minus += 1;
                }
                if (j > n - i)
                {
                    minus -= 1;
                }
                cout << s - minus << " ";
            }
        }
        minus = 0;
        cout << endl;
    }

    return 0;
}