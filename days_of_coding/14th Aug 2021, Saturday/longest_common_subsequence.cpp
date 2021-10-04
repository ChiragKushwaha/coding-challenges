#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int lcs(string a, string b, int i, int j, vector<vector<int> > &dp)
{
    if (a.size() <= i || b.size() <= j)
        return 0;

    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if (a[i] == b[j])
    {
        return dp[i][j] = 1 + lcs(a, b, i + 1, j + 1, dp);
    }
    else
    {
        int left = lcs(a, b, i + 1, j, dp);
        int right = lcs(a, b, i, j + 1, dp);
        return dp[i][j] = max(left, right);
    }
}

int main()
{
    string a = "helld;flkahfpwehpaiofhsdoifhapsefhwfwhioeo";
    string b = "coel3rweaoihfaeoihfaosdfihp3hfapohgapsoigl";
    int bsize = b.size();
    int asize = a.size();
    vector<vector<int> > dp(asize, vector<int>(bsize, -1));
    cout << lcs(a, b, 0, 0, dp) << endl;
}