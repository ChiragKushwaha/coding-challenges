#include<iostream>
#include<string>
using namespace std;
void lcp(string inp, string out) {
    if (inp.length() == 0) {
        cout<<out<<endl;
        return;
    }

    if (isalpha(inp[0])) {
        lcp(inp.substr(1, inp.length()), out + string(1, tolower(inp[0])));
        lcp(inp.substr(1, inp.length()), out + string(1, toupper(inp[0])));
    }
    else {
        lcp(inp.substr(1, inp.length()), out + string(1, inp[0]));
    }

}

int main() {
    string inp = "A1B3C";
    lcp(inp, "");
}