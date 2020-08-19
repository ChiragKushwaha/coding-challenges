#include <iostream>
#include <numeric>
using namespace std;

bool subset_sum(int arr[], int sum, int n)
{
    bool t[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < sum + 1; j++)
        {

            if (i == 0)
                t[i][j] = false;
            if (j == 0)
                t[i][j] = true;
        }
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < sum + 1; j++)
        {
            if (arr[i - 1] <= j)
            {
                t[i][j] = t[i - 1][j - arr[i - 1]] || t[i - 1][j];
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }

    return t[n][sum];
}

bool equal_sum_partition(int arr[], int n)
{
    int tot = 0;
    tot = accumulate(arr, arr + n, tot);
    cout << tot << endl;
    if (tot & 1)
    {
        return false;
    }
    else
    {

        return subset_sum(arr, tot / 2, n);
    }
}

int main()
{
    int val[] = {6, 3, 4, 5, 3};
    cout << equal_sum_partition(val, 5) << endl;

    return 0;
}