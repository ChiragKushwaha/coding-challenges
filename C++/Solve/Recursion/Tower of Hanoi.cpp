#include<iostream>
using namespace std;
void solve(int n, char s, char d, char h) {
    if (n==1) {
        cout<<n<<"- disc from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(n-1, s, h, d);
    cout<<n<<"-- disc from "<<s<<" to "<<d<<endl;
    solve(n-1, h, d, s);
}

int main() {
    // 1--- source
    // 2--- destination
    // 3--- helper
    solve(3, 'S', 'D', 'H');
    return 0;
}

