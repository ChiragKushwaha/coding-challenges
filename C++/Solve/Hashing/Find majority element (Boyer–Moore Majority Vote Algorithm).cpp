#include<iostream>
using namespace std;

int majorityElement(int arr[], int n) {
    int m;
    int i = 0;
    for (int j = 0; j<n;j++) {
        if (i == 0)
            m = arr[j], i =1;
        else (m == arr[j])? i++: i--;
    }

    return m;
}

int main() {
    int arr[] ={ 2, 2, 8, 6, 7, 2, 1, 2 };
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"Majority element is "<<majorityElement(arr, n)<<endl;
    return 0;
}