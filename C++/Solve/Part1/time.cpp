#include <iostream>
using namespace std;

const int N = 10, LOGN = 8;

bool is_bit_on(int x, int pos)
{
    cout << "is bit on pos : " << pos << endl;
    cout << (1 << pos) << endl;
    cout << (x & (1 << pos)) << endl;

    return ((x & (1 << pos)) != 0);
}

void flip_bit(int &x, int pos)
{
    cout << "flip bit pos : " << pos << endl;
    cout << (1 << pos) << endl;
    cout << (x ^ (1 << pos)) << endl;
    x ^= (1 << pos);
}

void increment(int &x)
{
    for (int i = 0; i < LOGN; i++)
    {
        cout << "ith : " << i << endl;
        if (is_bit_on(x, i) == 1)
        {
            flip_bit(x, i);
        }
        else
        {
            flip_bit(x, i);
            break;
        }
    }
}

int main()
{
    int counter = 1;
    cout << counter << endl;
    for (int i = 1; i < N; i++)
    {

        cout << i << endl;
        increment(counter);
        cout << counter << "*****************************" << endl;
    }
    return 0;
}