#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

int findMaxLenSubSeq(vector<int> &vec) {
    unordered_set<int> S(vec.begin(), vec.end());
    int max_len =1;
    for (int e: vec) {
        if (S.find(e-1)== S.end()) {
            int len=1;
            while (S.find(e+len)!=S.end()) {
                len++;
            }
            max_len = max(max_len, len);
        }
    }
    return max_len;
}


int main() {
    vector<int> vec={ 2, 0, 6, 1, 5, 3, 7 };
    cout<<"The length of maximum length consecutive subsequence is "<<findMaxLenSubSeq(vec);

    return 0;
}