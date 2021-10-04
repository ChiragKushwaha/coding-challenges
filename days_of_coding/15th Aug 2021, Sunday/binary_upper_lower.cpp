#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[] = {1, 4, 4, 4, 9, 9, 10};
    int n = 9;
    // cout << binary_search(a, a + n, 8) << endl;
    // cout << lower_bound(a, a + n, 4) - a << endl;
    // cout << upper_bound(a, a + n, 9) - a << endl;
    cout << upper_bound(a, a + n, 4) - lower_bound(a, a + n, 4) << endl; //range of the element
    // cout << upper_bound(a.begin(), a.end(), 4) - a.begin() << endl; in case of vectors
}