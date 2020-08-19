#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

vector<int> subset_sum(int arr[], int sum, int n)
{
    bool t[n + 1][sum + 1];
    vector<int> candidate;
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
    int ran = ((sum + 1) >> 1);
    for (int j = 0; j < ran; j++)
    {
        if (t[n][j])
            candidate.push_back(j);
    }

    return candidate;
}

int minimize_subset_sum_difference(int arr[], int n)
{
    int range = 0;
    range = accumulate(arr, arr + n, range);
    vector<int> candidate = subset_sum(arr, range, n);
    int min_diff = INT_MAX;
    for (int i = 0; i < candidate.size(); i++)
    {
        min_diff = min(min_diff, range - 2 * candidate[i]);
    }
    return min_diff;
}

int main()
{
    int val[] = {1, 2, 7};
    int n = sizeof(val)/sizeof(val[0]);
    cout << minimize_subset_sum_difference(val, n) << endl;

    return 0;
}