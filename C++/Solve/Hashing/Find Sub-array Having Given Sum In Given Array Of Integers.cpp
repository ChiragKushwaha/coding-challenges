#include<iostream>
#include<unordered_map>

using namespace std;

void findSubarray(int arr[], int n, int sum) {
    unordered_map<int, int> map;
    map.insert(pair<int, int>(0, -1));
    int sum_so_far = 0;
    for (int i=0;i<n;i++) {
        sum_so_far += arr[i];
        if (map.find(sum_so_far - sum) != map.end()) {
            cout<<"Sub-array found ["<<map[sum_so_far - sum] +1<<"-"<<i<<"]"<<endl;
        }
        map.insert(pair<int, int>(sum_so_far, i));
        // cout<<"MAP : ";
        // for (auto x : map) {
        //     cout<<x.first<<","<<x.second<<"|||";
        // }
        // cout<<endl;
    }
}

int main() {
    int arr[] ={ 0, 5, -7, 1, -4, 7, 6, 1, 4, 1, 10 };
    int sum = 15;
    int n = sizeof(arr)/sizeof(arr[0]);
    findSubarray(arr, n, sum);
    return 0;
}