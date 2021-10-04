#include <iostream>

using namespace std;

int base = 10000;
int reverse(int num)
{
    if (num == 0)
    {
        return 0;
    }
    int last = (num % 10) * base;
    base /= 10;
    return last + reverse(num / 10);
}

int main()
{
    cout << reverse(12345) << endl;
    return 0;
}