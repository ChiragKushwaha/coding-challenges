#include<iostream>
#include<string>
using namespace std;
void solve(int open, int closed, string out) {
    if (open == 0 && closed == 0) {
        cout<<out<<endl;
        return;
    }

    if (open > 0)
        solve(open-1, closed, out+'(');
    if (open < closed)
        solve(open, closed-1, out + ')');


    return;
}

int main() {
    int n = 3;
    solve(3, 3, "");
}