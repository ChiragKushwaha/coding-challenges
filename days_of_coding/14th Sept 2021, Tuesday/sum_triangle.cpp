#include <iostream>
using namespace std;

void printTriangleSum(int arr[], int n)
{
    if (n < 1)
    {
        return;
    }

    int a[n - 1];
    int i = 0;
    for (i = 0; i < n; i++)
    {
        a[i] = arr[i] + arr[i + 1];
    }
    printTriangleSum(a, n - 1);
    for (int j = 0; j < i; j++)
    {
        cout << arr[j] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1,
                 2,
                 3,
                 4,
                 5};

    printTriangleSum(arr, 5);

    return 0;
}