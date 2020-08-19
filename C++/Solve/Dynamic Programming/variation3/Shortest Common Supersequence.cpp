#include <iostream>
#include <algorithm>
using namespace std;

int SCS(string a, string b, int n, int m)
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

            if (a[i - 1] == b[j - 1])
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
    return m+n-t[n][m];
}

int main()
{
    string a = "abcde";
    string b = "davdse";
    cout << SCS(a, b, a.size(), b.size()) << "\n";
    return 0;
}