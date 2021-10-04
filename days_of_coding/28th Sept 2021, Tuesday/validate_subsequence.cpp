#include <iostream>

using namespace std;
// time O(n) and space O(1)
int main()
{
    int arr[] = {5, 1, 22, 25, 6, -1, 10, 8, 2, 3};
    int c[] = {1, 6, -1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int cs = sizeof(c) / sizeof(c[0]);
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (k >= cs)
        {
            break;
        }
        if (arr[i] == c[k])
        {
            k++;
        }
    }
    if (k == cs)
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }

    return 0;
}