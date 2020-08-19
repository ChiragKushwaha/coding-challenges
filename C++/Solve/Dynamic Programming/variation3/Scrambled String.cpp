#include <iostream>
using namespace std;
bool solve(string a, string b)
{
    if (a.compare(b) == 0)
        return true;
    if (a.length() <= 1)
        return false;
    int n = a.length();
    bool flag = false;
    for (int i = 1; i <= n - 1; i++)
    {
        if ((solve(a.substr(0, i), b.substr(n - i, i)) &&
             solve(a.substr(i, n - i), b.substr(0, n - i))) ||
            (solve(a.substr(0, i), b.substr(0, i)) &&
             solve(a.substr(i, n - i), b.substr(i, n - i))))
        {
            flag = true;
            break;
        }
    }
    return flag;
}

int main()
{
    string a = "dogisaloyalanimal";
    string arr[] = {"god", "si", "a", "alloy", "mainal"};
    string que = "";
    for (string ele : arr)
        que += ele;
    if (a.length() != que.length())
        cout << false << "\n";
    if (a.empty() && que.empty())
        cout << true << "\n";
    cout << solve(a, que) << "\n";
    return 0;
}