
#include <iostream>
#include <vector>
#include <unordered_map>
#include <ctime>
#include <Windows.h>

using namespace std;

int findIndex(vector<int> input)
{
    int max_occurring = input[0];
    unordered_map<int, int> count;
    for (int val: input) {
        count[val]++;
        if (count[max_occurring] < count[val]) {
            max_occurring = val;
        }
    }
    srand(time(nullptr));
    int k = (rand() % count[max_occurring]) + 1;
    int index = 0;
    while (k && index < input.size())
    {
        if (input.at(index) == max_occurring)
            k--;
        index++;
    }

    return index - 1;
}


int main()
{
    vector<int> input ={ 4, 3, 6, 8, 4, 6, 2, 4, 5, 9, 7, 4 };

    for (int i = 0; i < 5; i++) {
        Sleep(2);
        cout << "Index of maximum occurring element: "
            << findIndex(input) << endl;
    }

    return 0;
}