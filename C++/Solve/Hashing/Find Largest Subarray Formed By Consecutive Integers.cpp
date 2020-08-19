#include<iostream>
#include<vector>
using namespace std;

bool isConsecutive(int A[], int i, int j, int min, int max) {
    if (max-min != j-i) {
        return false;
    }
    vector<bool> visited(j-i +1);
    for (int k =i;k<=j;k++) {
        if (visited[A[k] - min]) {
            return false;
        }
        visited[A[k]-min] = true;
    }
    return true;
}



void findMaxSubArray(int A[], int n) {
    int len =1;
    int start =0, end=0;
    for (int i= 0;i<n-1;i++) {
        int max_val = A[i], min_val=A[i];
        for (int j=i+1;j<n;j++) {
            min_val =min(min_val, A[j]);
            max_val =max(max_val, A[j]);
            if (isConsecutive(A, i, j, min_val, max_val)) {
                if (len<max_val-min_val +1) {
                    len = max_val -min_val +1;
                    start = i;
                    end=j;
                }
            }
        }
    }
    cout<<"Longest subarray is ["<<start<<", "<<end<<"]"<<endl;
}

int main() {
    int A[] ={ 2, 0, 2, 1, 4, 3, 1, 0 };
    int n = sizeof(A)/sizeof(A[0]);
    findMaxSubArray(A, n);
    return 0;
}