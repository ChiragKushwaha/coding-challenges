#include <iostream>
#include <cstring>
using namespace std;
int static t[1001][1001];

int mcm(int arr[], int i, int j)
{
    if (i >= j)
        return 0;
    if (t[i][j] != -1)
        return t[i][j];
    int mn = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int tempans = mcm(arr, i, k) +
                      mcm(arr, k + 1, j) +
                      +arr[i - 1] * arr[k] * arr[j];
        mn = min(tempans, mn);
    }
    return t[i][j] = mn;
}

// int mcm(int arr[], int i, int j)
// {
//     if (i >= j)
//         return 0;
//     int mn = INT_MAX;
//     for (int k = i; k <= j - 1; k++)
//     {
//         int tempans = mcm(arr, i, k) +
//                       mcm(arr, k + 1, j) +
//                       +arr[i - 1] * arr[k] * arr[j];
//         mn = min(tempans, mn);
//     }
//     return mn;
// }
int main()
{
    memset(t, -1, sizeof(t));
    int arr[] = {40, 20, 30, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mcm(arr, 1, n - 1) << "\n";
    return 0;
}