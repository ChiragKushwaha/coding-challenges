#include<iostream>
#include<map>
using namespace std;

void customSort(int arr[], int n) {
    map<int, int>freq;
    for (int i = 0;i <n;i++)
        freq[arr[i]]++;

    int k = 0;
    for (auto it:freq) {
        while (it.second--)
            arr[k++] = it.first;
    }
}

int main() {

    int arr[] ={ 4, 2, 40, 10, 10, 1, 4, 2, 1, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);

    customSort(arr, n);

    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}