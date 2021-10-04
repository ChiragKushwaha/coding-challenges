#include <iostream>
using namespace std;

int size(string s)
{
    if (s[0] == '\0')
    {
        return 0;
    }
    return size(s.substr(1)) + 1;
}

int main()
{
    cout << size("hello") << endl;
}