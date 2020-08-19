#include<iostream>
using namespace std;
void pws(string inp, string out) {
    if (inp.length() == 0) {
        cout<<out<<endl;
        return;
    }
    pws(inp.substr(1, inp.length()), out + '_'+ inp[0]);
    pws(inp.substr(1, inp.length()), out + inp[0]);

}

int main() {
    string inp = "ABC";
    pws(inp.substr(1, inp.length()), string(1, inp[0]));
}