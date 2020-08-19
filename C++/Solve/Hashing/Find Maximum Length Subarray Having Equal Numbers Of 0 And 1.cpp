#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

void max_len_subarray(int arr[], int n) {
    unordered_map<int, int>map;
    map[0] = -1;
    int len = 0;
    int ending_index = -1;
    int sum =0;
    vector<pair<int, int>> ans;
    //   0  1  2  3  4  5  6
    // { 0, 0, 1, 0, 1, 0, 0 }
    // map ={0:-1, -1:0,-2:1,} 
    for (int i = 0;i<n;i++) {
        sum += (arr[i] == 0) ? -1:1;
        if (map.find(sum)!=map.end()) {
            if (len<=i-map[sum]) {
                len = i-map[sum];
                ending_index = i;
                ans.push_back(pair<int, int>(ending_index -len +1, ending_index));
            }
        }
        else {
            map[sum] = i;
        }
    }
    if (ending_index != -1) {
        for (auto a: ans)
            cout<<"["<<a.first<<", "<<a.second<<"]"<<endl;
    }
    else {
        cout<<"No sub-array exists";
    }
}


int main() {
    int arr[] ={ 0, 0, 1, 0, 1, 0, 0 };
    int n = sizeof(arr)/sizeof(arr[0]);
    max_len_subarray(arr, n);
    return 0;
}