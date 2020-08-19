#include<iostream>
#include<vector>
using namespace std;
void solve(vector<int> a, int k, int currentIndex) {
    if (a.size() == 1) {
        cout<<a[0]<<endl;
        return;
    }
    currentIndex = (currentIndex + k-1)% a.size();
    a.erase(a.begin() + currentIndex);
    solve(a, k, currentIndex);
    return;
}

int main() {
    vector<int> a;
    for (int i = 1;i <=40;i++)
        a.push_back(i);
    solve(a, 7, 0);
    return 0;
}

