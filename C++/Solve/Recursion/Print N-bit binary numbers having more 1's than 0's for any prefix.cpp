#include<iostream>
#include<string>
using namespace std;
void solve(int one, int zero, int n, string out) {
    if (n == 0) {
        cout<<out<<endl;
        return;
    }

    solve(one + 1, zero, n-1, out+'1');
    if (one>zero)
        solve(one, zero +1, n-1, out + '0');


    return;
}

int main() {
    int n = 4;
    solve(0, 0, n, "");
}