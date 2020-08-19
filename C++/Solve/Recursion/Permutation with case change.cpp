#include<iostream>
#include<string>
using namespace std;
void pwcc(string inp, string out) {
    if (inp.length() == 0) {
        cout<<out<<endl;
        return;
    }
    pwcc(inp.substr(1, inp.length()), out + string(1, tolower(inp[0])));
    pwcc(inp.substr(1, inp.length()), out + string(1, toupper(inp[0])));

}

int main() {
    string inp = "ABC";
    pwcc(inp, "");
}