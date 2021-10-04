#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll l, r;
    cin >> l >> r;
    if (l < r)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    for (ll i = l; i < r + 1; i += 2)
    {
        cout << i << " " << i + 1 << endl;
    }
}