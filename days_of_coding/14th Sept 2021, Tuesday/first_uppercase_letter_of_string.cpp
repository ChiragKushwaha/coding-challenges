#include <iostream>
#include <algorithm>
using namespace std;

char findFirstUppercase(string s, int curr)
{
    // if (s[curr] > 'A' && s[curr] < 'Z')
    if (s.length() == 0)
    {
        return 0;
    }
    if (isupper(s[curr]))
    {
        return s[curr];
    }
    return findFirstUppercase(s, curr + 1);
}

int main()
{
    string s = "";
    char res = findFirstUppercase(s, 0);
    if (res == 0)
    {
        cout << "Empty String" << endl;
    }
    else
    {
        cout << res << endl;
    }

    return 0;
}