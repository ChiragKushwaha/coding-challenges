#include <iostream>
#include <unordered_map>
using namespace std;

void printSubArray(int A[], int left, int right, int n) {
    if (left< 0 || left>right || right>=n) {
        return;
    }
    for (int i = left;i<=right; i++) {
        cout<<A[i]<<", ";
    }
    cout<<endl;
}

void calculate(int A[], int n) {
    unordered_map<int, bool>visited;
    int right =0, left =0;
    while (right< n) {
        while (right<n && !visited[A[right]]) {
            visited[A[right]] = true;
            right++;
        }
        printSubArray(A, left, right-1, n);
        while (right< n && visited[A[right]]) {
            visited[A[left]] = false;
            left++;
        }
    }
}

int main()
{
    int A[] ={ 5, 2, 3, 5, 4, 3 };
    int n = sizeof A / sizeof A[0];

    calculate(A, n);

    return 0;
}