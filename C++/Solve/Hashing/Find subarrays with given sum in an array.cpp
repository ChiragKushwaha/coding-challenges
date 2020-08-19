#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iterator>
using namespace std;

void printSubarray(int arr[], int index, vector<int> vec)
{
    for (int &j: vec)
    {
        cout << "[" << (j + 1) << ".." << index << "] -- { ";
        copy(arr + j + 1, arr + index + 1,
            ostream_iterator<int>(cout, " "));
        cout << "}\n";
    }
}

void findSubarrays(int arr[], int n, int sum)
{
    unordered_map<int, vector<int>> map;
    map[0].push_back(-1);
    int sum_so_far = 0;
    for (int index = 0; index < n; index++)
    {
        sum_so_far += arr[index];
        auto itr = map.find(sum_so_far - sum);
        if (itr != map.end())
        {
            printSubarray(arr, index, map[itr->first]);
        }
        map[sum_so_far].push_back(index);
    }
}

int main()
{
    int arr[] ={ 3, 4, -7, 1, 3, 3, -7, 7, 1, -4 };
    //3  7   0  1  4  7  8  -4
    int sum = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    findSubarrays(arr, n, sum);
    return 0;
}