#include<iostream>
using namespace std;
int findDuplicate(int arr[], int n) {
    bool visited[n];
    fill(visited, visited +n, 0);
    for (int i =0;i<n;i++) {
        if (visited[arr[i]]) {
            return arr[i];
        }
        visited[arr[i]] = true;
    }
    return -1;
}

int main() {
    int arr[] ={ 1, 2, 3, 4, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Duplicate element is "<<findDuplicate(arr, n);
    return 0;
}