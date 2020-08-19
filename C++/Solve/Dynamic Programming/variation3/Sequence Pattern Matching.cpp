#include <iostream>
using namespace std;

int LCS(string x, string y, int n, int m)
{
    int t[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
            if (i == 0 || j == 0)
                t[i][j] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {

            if (x[i - 1] == y[j - 1])
            {
                t[i][j] = 1 + t[i - 1][j - 1];
            }
            else
            {
                t[i][j] = max(t[i][j - 1],
                              t[i - 1][j]);
            }
        }
    }
    return t[n][m];
}

int main()
{
    string x = "axy";
    string y = "adxcpy";
    cout << (LCS(x, y, x.size(), y.size()) == min(x.length(), y.length()))<< "\n";
    return 0;
}