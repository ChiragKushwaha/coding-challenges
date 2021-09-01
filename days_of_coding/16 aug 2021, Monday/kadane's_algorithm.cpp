#include <iostream>

using namespace std;

int main()
{
    int a[] = {-2, 3, 2, -1};
    int size_a = sizeof(a) / sizeof(a[0]);
    int max_current_sum = a[0], global_sum = a[0];
    for (int i = 1; i < size_a; i++)
    {
        max_current_sum = max(a[i], max_current_sum + a[i]);
        if (max_current_sum > global_sum)
        {
            global_sum = max_current_sum;
        }
    }
    cout << global_sum << endl;
    return 0;
}