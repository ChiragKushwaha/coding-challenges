#include <iostream>
#include <algorithm>
using namespace std;

void minimum_number_of_insertion_and_deletion(string a, string b, int n, int m)
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
    cout << "del: " << n - t[n][m] << "  ins: " << m - t[n][m];
}

int main()
{
    string a = "heap";
    string b = "pea";
    minimum_number_of_insertion_and_deletion(a, b, a.size(), b.size());
    return 0;
}