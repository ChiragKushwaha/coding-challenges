#include<iostream>
#include<numeric>
#include<unordered_map>
using namespace std;
bool subsetSum(int S[], int n, int a, int b, int c, unordered_map<string, bool> &lookup) {
    if (a==0 || b==0 || c==0) {
        cout<<"0000000"<<endl;
        return true;

    }
    if (n< 0) {
        cout<<"n < 0"<<endl;
        return false;
    }
    string key = to_string(a) + "|" + to_string(b) + "|"+ to_string(c)+"|" +to_string(n);
    if (lookup.find(key)== lookup.end())
    {
        cout<<"inside first : "<<key<<" value : "<<lookup[key]<<endl;
        bool A = false;
        if (a-S[n] >= 0)A= subsetSum(S, n-1, a-S[n], b, c, lookup);
        bool B = false;
        if (!A && b-S[n] >= 0)B= subsetSum(S, n-1, a, b-S[n], c, lookup);
        bool C = false;
        if (!A && !B && c-S[n] >= 0)C= subsetSum(S, n-1, a, b, c-S[n], lookup);
        lookup[key] = A||B||C;
    }
    cout<<"return"<<endl;
    return lookup[key];
}

bool partition(int S[], int n) {
    if (n<3)
        return false;
    unordered_map<string, bool> lookup;
    int sum = accumulate(S, S+n, 0);

    return !(sum%3) && subsetSum(S, n-1, sum/3, sum/3, sum/3, lookup);
}

int main() {
    int S[] ={ 7, 3, 2, 1, 5 };
    int n = sizeof(S)/sizeof(S[0]);
    if (partition(S, n))
        cout<<"Yes"<<endl;
    else
        cout<<"No";
    return 0;
}