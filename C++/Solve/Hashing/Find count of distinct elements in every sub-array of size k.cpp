#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

void findDistinctCount(vector<int> arr, int k) {
    unordered_map <int, int> freq;
    for (int i = 0;i<arr.size();i++) {
        if (i<k) {
            freq[arr[i]]++;
        }
        else {
            freq[arr[i-k]]--;
            freq[arr[i]] ++;
            if (freq[arr[i-k]] == 0) {
                freq.erase(arr[i-k]);
            };

        }
        if (i>=k-1) {
            cout<<"The count of distinct element in sub-array ["<<i-k+1<<", "<<i<<"] is "<<freq.size()<<endl;
        }

    }
}

int main() {
    vector<int> input ={ 1, 1, 2, 1, 3, 4 };
    int k = 3;
    findDistinctCount(input, k);
    return 0;
}
