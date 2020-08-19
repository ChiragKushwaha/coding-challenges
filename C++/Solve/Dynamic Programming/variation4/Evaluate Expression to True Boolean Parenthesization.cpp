#include <iostream>
#include <unordered_map>
using namespace std;

unordered_map<string, int> mp;
int solve(string s, int i, int j, bool isTrue)
{
    if (i > j)
        return false;
    if (i == j)
        if (isTrue)
            return s[i] == 'T';
        else
            return s[i] == 'F';

    string key = to_string(i) + "|" + to_string(j) + "|" + to_string(isTrue);
    if (mp.find(key) != mp.end())
        return mp[key];

    int ans = 0;
    for (int k = i + 1; k <= j - 1; k = k + 2)
    {
        int lt = solve(s, i, k - 1, true);
        int lf = solve(s, i, k - 1, false);
        int rt = solve(s, k + 1, j, true);
        int rf = solve(s, k + 1, j, false);
        if (s[k] == '&')
            if (isTrue)
                ans = ans + lt * rt;
            else
                ans = ans + lf * rt + lf * rf + lt * rf;

        else if (s[k] == '|')
            if (isTrue)
                ans = ans + lt * rt + lt * rf + rt * lf;
            else
                ans = ans + lf * rf;

        else if (s[k] == '^')
            if (isTrue)
                ans = ans + lt * rf + lf * rt;
            else
                ans = ans + lt * rt + rf * lf;
    }
    return mp[key] = ans;
}
int main()
{
    mp.clear();
    string arr = "T|T&F^T";
    int n = arr.length();
    cout << solve(arr, 0, n - 1, true) << "\n";
    return 0;
}