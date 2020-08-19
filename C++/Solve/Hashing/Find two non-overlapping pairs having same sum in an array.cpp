#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

typedef pair<int, int> Pair;
void findPairs(int arr[], int n)
{
    unordered_map<int, vector<Pair>> map;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int sum = arr[i] + arr[j];
            if (map.find(sum) != map.end())
            {
                for (auto pair : map.find(sum)->second)
                {
                    int m = pair.first, n = pair.second;
                    if ((m != i && m != j) && (n != i && n != j))
                    {
                        cout << "First Pair (" << arr[i] << ", " << arr[j]
                            << ")\nSecond Pair (" << arr[m] << ", " <<
                            arr[n] << ")";
                        return;
                    }
                }
            }
            map[sum].push_back({ i, j });
        }
    }
    cout << "No non-overlapping pairs present";
}

int main()
{
    int arr[] ={ 3, 4, 7, 3, 4 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findPairs(arr, n);
    return 0;
}