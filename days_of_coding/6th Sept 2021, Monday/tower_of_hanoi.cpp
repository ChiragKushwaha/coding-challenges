#include <iostream>
#include <vector>

using namespace std;

void hanoi(int n, int S, int D, int A, vector<vector<int> > &ans)
{
    if (n == 1)
    {
        vector<int> t;
        t.push_back(S);
        t.push_back(D);
        ans.push_back(t);
        return;
    }
    hanoi(n - 1, S, A, D, ans);
    vector<int> k;
    k.push_back(S);
    k.push_back(D);
    ans.push_back(k);
    hanoi(n - 1, A, D, S, ans);
}

int main()
{
    int n = 3;
    vector<vector<int> > ans;
    int S = 1, A = 2, D = 3;
    hanoi(n, S, D, A, ans);
    for (auto a : ans)
    {
        cout << a[0] << " " << a[1] << endl;
    }
}