#include <iostream>
#include <cstring>
using namespace std;

// int LCS(string x, string y, int n, int m)
// {
//     if (x == "" || y == "")
//         return 0;
//     if (x[n - 1] == y[m - 1])
//     {
//         return 1 + LCS(x, y, n - 1, m - 1);
//     }
//     else
//     {
//         return max(LCS(x, y, n, m - 1),
//                    LCS(x, y, n - 1, m));
//     }
// }

// int static t[1001][1001];
// int LCS(string x, string y, int n, int m)
// {
//     if (x == "" || y == "")
//         return 0;

//     if (t[n][m] != -1)
//         return t[n][m];

//     if (x[n - 1] == y[m - 1])
//     {
//         return t[n][m] = 1 + LCS(x, y, n - 1, m - 1);
//     }
//     else
//     {
//         return t[n][m] = max(LCS(x, y, n, m - 1),
//                              LCS(x, y, n - 1, m));
//     }
// }

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
                t[i][j] = 1+ t[i - 1][j - 1];
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
    string x = "abcde";
    string y = "davdse";
    cout << LCS(x, y, x.size(), y.size()) << "\n";
    return 0;
}