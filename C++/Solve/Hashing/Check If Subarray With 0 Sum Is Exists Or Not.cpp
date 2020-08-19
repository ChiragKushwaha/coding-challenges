#include <iostream>
#include<unordered_set>
using namespace std;

bool zeroSumSubarray(int A[], int n) {
    unordered_set<int>set;
    set.insert(0);
    int sum = 0;
    for (int i= 0; i<n;i++) {
        cout<<"step: "<<i<<endl;
        sum += A[i];
        cout<<"sum : "<<sum<<endl;
        if (set.find(sum)!= set.end()) {
            return true;
        }
        else {
            set.insert(sum);
            cout<<"set : ";
            for (int o: set) {
                cout<<o<<" ";
            }
            cout<<endl;
        }
        cout<<"..................."<<endl;
    }
    return false;
}

int main() {

    int A[] ={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    // [4, 6, 3, 2, 6]
    int n = sizeof(A)/sizeof(A[0]);

    zeroSumSubarray(A, n) ?
        cout << "Subarray exists":
        cout << "Subarray do not exist";

    return 0;
}