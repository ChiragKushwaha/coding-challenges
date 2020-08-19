#include <iostream>
#include <cstring>
using namespace std;

int unbounded_knapsack(int length[], int price[], int rodLength, int n)
{
    int t[n + 1][rodLength + 1];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < rodLength + 1; j++)
            if (i == 0 || j == 0)
                t[i][j] = 0;
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < rodLength + 1; j++)
        {
            if (length[i - 1] <= j)
            {
                t[i][j] = max(price[i - 1] + t[i][j - length[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][2] = t[i - 1][j];
            }
        }

    return t[n][rodLength];
}

int main()
{
    int length[] = {5, 10, 15};
    int price[] = {10, 30, 20};
    int n = sizeof(price) / sizeof(price[0]);
    int rodLength = 50;
    cout << unbounded_knapsack(length, price, rodLength, n) << endl;

    return 0;
}