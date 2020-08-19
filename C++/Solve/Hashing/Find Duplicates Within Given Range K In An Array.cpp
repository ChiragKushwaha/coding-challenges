#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool contains(unordered_set<int> const &set, int x) {
    return set.find(x) != set.end();
}

bool hasDuplicates(vector<int> &vec, int k) {
    unordered_set<int> window;
    for (int i=0;i<vec.size();i++) {
        if (contains(window, vec[i])) {
            return true;
        }
        window.insert(vec[i]);
        if (i >= k) {
            window.erase(vec[i-k]);
        }
    }
    return false;
}


int main()
{
    vector<int> vec ={ 5, 6, 8, 2, 4, 9 };
    int k = 4;

    if (hasDuplicates(vec, k)) {
        cout << "Duplicates found";
    }
    else {
        cout << "No Duplicates found";
    }

    return 0;
}