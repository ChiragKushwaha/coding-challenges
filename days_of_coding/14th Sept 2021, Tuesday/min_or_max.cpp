#include <iostream>
#include <algorithm>
using namespace std;

int min_or_max(int arr[], int n, int curr, bool isMax = true)
{
    if (n < 1)
    {
        return curr;
    }
    int c = isMax ? max(arr[n - 1], curr) : min(arr[n - 1], curr);
    return min_or_max(arr, n - 1, c, isMax);
}

int main()
{
    int arr[] = {12, 23, 4, 23, 40, 2, 1};
    bool isMax = false;
    cout << min_or_max(arr, 7, isMax ? INT_MIN : INT_MAX, isMax) << endl;

    return 0;
}