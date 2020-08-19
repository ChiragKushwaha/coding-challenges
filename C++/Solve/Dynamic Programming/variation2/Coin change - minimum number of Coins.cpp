#include <iostream>
#include <numeric>
using namespace std;

int subset_sum_count_unbounded(int coin[], int sum, int n)
{
    int t[n + 1][sum + 1];
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < sum + 1; j++)
        {
            if (j == 0)
                t[i][j] = 0;
            if (i == 0)
                t[i][j] = INT_MAX - 1;
            // if (i == 1 && j >= 1)
            //     if (j % coin[0] == 0)
            //         t[i][j] = j / coin[0];
            //     else
            //         t[i][j] = INT_MAX;
        }
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < sum + 1; j++)
        {
            if (coin[i - 1] <= j)
            {
                t[i][j] = min(t[i][j - coin[i - 1]] + 1, t[i - 1][j]);
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    for (int i = 0; i < n + 1; i++)
    {
        for (int j = 0; j < sum + 1; j++)
        {
            cout << t[i][j] << "  ";
        }
        cout << "\n";
    }
    return t[n][sum];
}

int minimum_number_of_coins(int coin[], int sum, int n)
{
    int arraySum = 0;
    arraySum = accumulate(coin, coin + n, arraySum);
    int subset1 = (sum + arraySum) / 2;
    int count = subset_sum_count_unbounded(coin, subset1, n);
    return count;
}

int main()
{
    int coin[] = {1, 2, 3};
    int n = sizeof(coin) / sizeof(coin[0]);
    int sum = 5;
    cout << minimum_number_of_coins(coin, sum, n) << endl;

    return 0;
}