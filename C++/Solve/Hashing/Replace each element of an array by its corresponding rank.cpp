#include<iostream>
#include<queue>
using namespace std;

// void transform(int arr[], int n) {
//     map<int, int> map;
//     for (int i=0;i<n;i++)
//         map[arr[i]] = i;

//     int rank = 1;
//     for (auto i:map)
//         arr[i.second] = rank++;
// }

void transform(int arr[], int n) {
    priority_queue<pair<int, int>> maxHeap;
    for (int i=0;i<n;i++) {
        maxHeap.push({ arr[i], i });
    }
    int rank = n;
    while (!maxHeap.empty()) {
        arr[maxHeap.top().second] = rank--;
        maxHeap.pop();
    }
}

int main()
{
    int arr[] ={ 10, 8, 15, 12, 6, 20, 1 };
    int n = sizeof(arr)/sizeof(arr[0]);

    transform(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}