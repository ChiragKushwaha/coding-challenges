#include<iostream>
#include<unordered_map>
using namespace std;

void maxLengthSubArray(int arr[], int n, int S) {
    unordered_map<int, int>map;
    map[0] = -1;
    int len = 0;
    int ending_index = -1;
    int sum =0;
    for (int i=0;i<n; i++) {
        sum += arr[i];
        if (map.find(sum) == map.end()) {
            map[sum] = i;

        }
        if (map.find(sum-S)!=map.end() && len< i-map[sum-S]) {
            len = i-map[sum-S];
            ending_index= i;
            cout<< ending_index-len+1<<", "<<ending_index<<endl;
        }
    }
    cout<<"ans : ["<<ending_index-len+1<<", "<<ending_index<<"]"<<endl;

}


int main() {
    int arr[] ={ 5, 6, -5, 5, 3, 5, 3, -2, 0 };
    int sum = 8;
    int n = sizeof(arr)/sizeof(arr[0]);
    maxLengthSubArray(arr, n, sum);
    return 0;
}