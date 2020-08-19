#include <iostream>
#include <unordered_set>
using namespace std;

void checkConsecutive(int arr[], int n)
{
    int min = arr[0], max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
            min = arr[i];

        if (arr[i] > max)
            max = arr[i];
    }

    if (max - min != n - 1) {
        cout << "Array do not contain consecutive integers";
        return;
    }


    unordered_set<int> visited;

    for (int i = 0; i < n; i++)
    {
        if (visited.find(arr[i]) != visited.end()) {
            cout << "Array do not contain consecutive integers";
            return;
        }

        visited.insert(arr[i]);
    }

    cout << "Array contains consecutive integers from "<< min <<" to "<<max<<endl;;

}

// Check if an array is formed by consecutive integers
int main()
{
    int arr[] ={ -1, 5, 4, 2, 0, 3, 1 };
    int n = sizeof(arr) / sizeof(arr[0]);
    checkConsecutive(arr, n);
    return 0;
}