#include<iostream>
#include<vector>
#include<tuple>
#include<map>
#include<algorithm>
using namespace std;
bool value_comparer(tuple<int, int, int>const &lhs, tuple<int, int, int>const & rhs) {
    if (get<1>(lhs) != get<1>(rhs)) {
        return get<1>(lhs) > get<1>(rhs);
    }
    else {
        return get<2>(lhs) < get<2>(rhs);
    }
}

void sortByFrequencyAndIndex(int arr[], int n) {
    if (n<2) {
        return;
    }
    map<int, pair<int, int>> hm;

    for (int i=0;i<n;i++) {
        if (hm.find(arr[i])!= hm.end())
            hm[arr[i]].first++;
        else hm[arr[i]] = make_pair(1, i);
    }
    vector<tuple<int, int, int>> vt;

    for (auto it:hm) {
        pair<int, int> p = it.second;
        vt.push_back(make_tuple(it.first, p.first, p.second));
    }
    sort(vt.begin(), vt.end(), value_comparer);

    int a, b, c, k  =0;
    for (auto tup: vt) {
        tie(a, b, c) = tup;
        for (int j= 0;j<b;j++)
            arr[k++] =a;
    }
}

int main() {
    int a[] ={ 3, 3, 1, 1, 1, 8, 3, 6, 8, 7, 8 };
    int n = sizeof(a)/ sizeof(a[0]);
    sortByFrequencyAndIndex(a, n);

    for (int e: a) {
        cout<<e<<" ";
    }
    cout<<endl;
    return 0;
}