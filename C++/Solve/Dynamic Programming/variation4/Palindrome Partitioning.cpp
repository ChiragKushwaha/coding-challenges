#include <iostream>
#include <cstring>
using namespace std;
int static t[1001][1001];

bool isPalindrome(string s, int i, int j)
{
    while (i < j)
        if (s[i++] != s[j--])
            return false;
    return true;
}
int pp(string arr, int i, int j)
{
    if (i >= j)
        return 0;
    if (t[i][j] != -1)
        return t[i][j];
    if (isPalindrome(arr, i, j))
        return t[i][j] = 0;
    int ans = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int left, right;
        if (t[i][k] != -1)
            left = t[i][k];
        else
        {
            left = pp(arr, i, k);
            t[i][k] = left;
        }
        if (t[k + 1][j] != -1)
            right = t[k + 1][j];
        else
        {
            right = pp(arr, k + 1, j);
            t[k + 1][j] = left;
        }
        int temp = 1 + left + right;
        ans = min(temp, ans);
    }
    return t[i][j] = ans;
}
// int pp(string arr, int i, int j)
// {
//     if (i >= j)
//         return 0;
//     if (isPalindrome(arr, i, j))
//         return 0;
//     int ans = INT_MAX;
//     for (int k = i; k <= j - 1; k++)
//     {
//         int temp = 1 + pp(arr, i, k) +
//                    pp(arr, k + 1, j);
//         ans = min(temp, ans);
//     }
//     return ans;
// }
int main()
{
    memset(t, -1, sizeof(t));
    string arr = "nitik";
    int n = arr.length();
    cout << pp(arr, 0, n - 1) << "\n";
    return 0;
}