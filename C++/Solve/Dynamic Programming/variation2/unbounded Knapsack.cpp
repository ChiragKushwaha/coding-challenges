#include <iostream>
#include <cstring>
using namespace std;

int unbounded_knapsack(int wt[], int val[], int w, int n)
{
    // if (n == 0 || w == 0)
    //     return 0;

    // if (t[n][w] != -1)
    // {
    //     return t[n][w];
    // }
    // if (wt[n - 1] <= w)
    //     return t[n][w] = max(val[n - 1] + knapsack(wt, val, w - wt[n - 1], n),
    //                          knapsack(wt, val, w, n - 1));
    // else
    //     return t[n][w] = knapsack(wt, val, w, n - 1);
    int t[n + 1][w + 1];
    memset(t, 0, sizeof(t));
    for (int i = 0; i < n + 1; i++)
        for (int j = 0; j < w + 1; j++)
            if (i == 0 || j == 0)
                t[i][j] = 0;
    for (int i = 1; i < n + 1; i++)
        for (int j = 1; j < w + 1; j++)
        {
            if (wt[i - 1] <= j)
            {
                t[i][j] = max(val[i - 1] + t[i][j - wt[i - 1]], t[i - 1][j]);
            }
            else
            {
                t[i][2] = t[i - 1][j];
            }
        }

    return t[n][w];
}

int main()
{
    int wt[] = {5, 10, 15};
    int val[] = {10, 30, 20};
    int n = sizeof(val) / sizeof(val[0]);
    int bagSize = 100;
    cout << unbounded_knapsack(wt, val, bagSize, n) << endl;

    return 0;
}