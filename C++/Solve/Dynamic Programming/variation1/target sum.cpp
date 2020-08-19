#include <iostream>
#include <numeric>
using namespace std;
// question is same as "count the number of subset with given difference"
int subset_sum_count(int arr[], int sum, int n)
{
    int t[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < sum + 1; j++)
        {
            if (i == 0)
                t[i][j] = 0;
            if (j == 0)
                t[i][j] = 1;
        }
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] + t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }

    return t[n][sum];
}

int target_sum(int arr[], int target, int n)
{
    int arraySum = 0;
    arraySum = accumulate(arr, arr + n, arraySum);
    int subset1 = (target + arraySum) / 2;
    int count = subset_sum_count(arr, subset1, n);
    return count;
}

int main()
{
    int val[] = {1, 1, 2, 3};
    int n = sizeof(val) / sizeof(val[0]);
    int target = 1;
    cout << target_sum(val, target, n) << endl;

    return 0;
}