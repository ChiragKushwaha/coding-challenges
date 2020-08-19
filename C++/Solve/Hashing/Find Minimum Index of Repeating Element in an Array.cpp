#include <iostream>
#include <unordered_set>
using namespace std;

int findMinIndex(int arr[], int n) {
    unordered_set<int> set;
    int minIndex = n;
    for (int i=n;i>=0;i--) {
        if (set.find(arr[i]) != set.end())
            minIndex = i;
        else
            set.insert(arr[i]);
    }
    return minIndex;
}
int main()
{
    // int arr[] ={ 5, 6, 3, 4, 3, 6, 4 };
    int arr[] ={ 1, 0, 3, 4, 2, 3, 5, 6 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int minIndex = findMinIndex(arr, n);
    if (minIndex != n)
        cout << "Minimum index of repeating element is " << minIndex;
    else
        cout << "Invalid Input";
    return 0;
}