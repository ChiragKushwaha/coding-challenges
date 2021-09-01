#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

// 1. naive approach put two for loog and traverse the array and find the sum
// 2. use map will take extra space but reduce time
// 3. sort the array and use the two pointer technique

void twoSum(int arr[], int size, int targetSum) // O(n^2) time | O(1) space
{
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                cout << arr[i] << " " << arr[j] << endl;
                return;
            }
        }
    return;
}

void twoSum1(vector<int> arr, int targetSum) // O(n) time | O(n) space
{
    map<int, bool> nums;
    for (int num : arr)
    {
        int potentialMatch = targetSum - num;
        if (nums.find(potentialMatch) != nums.end())
        {
            cout << potentialMatch << " " << num << endl;
            return;
        }
        else
        {
            nums[num] = true;
        }
    }
    return;
}

void twoSum2(vector<int> arr, int targetSum) // O(n*logn(n)) time | O(1) space
{
    sort(arr.begin(), arr.end());
    int left = 0;
    int right = arr.size() - 1;

    while (left < right)
    {
        int currentSum = arr[left] + arr[right];
        if (currentSum == targetSum)
        {
            cout << arr[left] << " " << arr[right] << endl;
            return;
        }
        else if (currentSum < targetSum)
        {
            left += 1;
        }
        else if (currentSum > targetSum)
        {
            right -= 1;
        }
    }
    return;
}

int main()
{
    vector<int> arr;
    arr.push_back(14);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(5);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(9);
    arr.push_back(12);
    twoSum2(arr, 7);
    return 0;
}