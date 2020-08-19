#include<iostream>
#include<vector>
using namespace std;
int findDistinct(vector<int> input) {
    int distinct_count = input.size();
    int left = 0;
    int right = input.size() -1;
    while (left < right)
    {
        while (left< right && input[left] == input[left+1]) {
            distinct_count--;
            left++;
        }
        while (left< right && input[right] == input[right-1]) {
            distinct_count--;
            right--;
        }
        int sum = input[left] + input[right];
        if (sum == 0) {
            distinct_count--;
            left++;
            right--;
        }
        else if (sum < 0) {
            left++;
        }
        else {
            right--;
        }
    }
    return distinct_count;
}

int main() {
    vector<int> input ={ -1, -1, 0, 1, 1, 1 };
    cout<<"The number of distinct absolute values are "<<findDistinct(input);
    return 0;
}