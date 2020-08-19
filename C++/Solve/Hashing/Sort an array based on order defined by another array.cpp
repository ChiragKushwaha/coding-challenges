#include<iostream>
#include<unordered_map>
#include<algorithm>

using namespace std;

void customSort(int arr1[], int arr2[], int m, int n) {
    unordered_map<int, int>freq;
    for (int i=0;i<m;i++) {
        freq[arr1[i]] ++;
    }
    int index = 0;
    for (int i =0;i<n;i++) {
        while (freq[arr2[i]]) {
            arr1[index++] = arr2[i];
            freq[arr2[i]] --;
        }
        freq.erase(arr2[i]);
    }

    int i = index;
    for (auto it: freq)
        while (it.second--)
        {
            arr1[index++] = it.first;
        }
    sort(arr1 + i, arr1 +index);

}

int main() {
    int arr1[] ={ 5, 8, 9, 3, 5, 7, 1, 3, 4, 9, 3, 5, 1, 8, 4 };
    int arr2[] ={ 3, 5, 7, 2 };

    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    customSort(arr1, arr2, m, n);
    cout<<"After sorting the array is: ";
    for (int ele: arr1) {
        cout<<ele<<" ";
    }cout<<endl;
    return 0;
}