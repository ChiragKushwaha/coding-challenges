#include <iostream>
#include<unordered_map>
using namespace std;

void printallSubarrays(int arr[], int n) {
    unordered_multimap<int, int> map;
    map.insert(pair<int, int>(0, -1));
    int sum = 0;
    for (int i= 0;i < n;i++) {
        sum+=arr[i];
        if (map.find(sum)!=map.end()) {
            auto it = map.find(sum);
            while (it!= map.end() && it->first == sum) {
                cout<<"Subarray ["<<it->second + 1<<".."<<i<<"]\n";
                it++;
            }
        }
        map.insert(pair<int, int>(sum, i));
    }
}
int main() {

    int A[] ={ 3, 4, -7, 3, 1, 3, 1, -4, -2, -2 };
    // [3, 7, 0, 3, 4, 7, 8, 4, 2, 0]
    //multimap: (0,-1)(3,0)(7,1)(4,4)(8,6)(2,8)
    int n = sizeof(A)/sizeof(A[0]);

    printallSubarrays(A, n);

    return 0;
}