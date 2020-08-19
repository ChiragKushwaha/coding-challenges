#include <iostream>
#include <algorithm>
using namespace std;

string LCS(string a, string b, int n, int m)
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

    int i = n, j = m;
    string s = "";
    while (i > 0 && j > 0)
    {
        if (a[i - 1] == b[j - 1])
        {
            s.push_back(a[i - 1]);
            i--;
            j--;
        }
        else
        {
            if (t[i][j - 1] > t[i - 1][j])
                j--;
            else
                i--;
        }
    }
    reverse(s.begin(), s.end());
    return s;
}

int main()
{
    string a = "abcde";
    string b = "davdse";
    cout << LCS(a, b, a.size(), b.size()) << "\n";
    return 0;
}