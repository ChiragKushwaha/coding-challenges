#include<iostream>
using namespace std;
void findSubsets(string inp, string out) {
    if (inp.length() == 0) {
        cout<<out<<endl;
        return;
    }
    findSubsets(inp.substr(1, inp.size()), out);
    findSubsets(inp.substr(1, inp.size()), out + inp[0]);
}
int main() {
    string inp ="abc";
    findSubsets(inp, "");
    return 0;
}