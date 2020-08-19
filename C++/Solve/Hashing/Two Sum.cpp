#include <unordered_map>
#include <vector>

using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> comp;
        int len = nums.size();
        for (int i = 0; i < len; i++)
        {
            int diff = target - nums[i];
            if (comp.find(diff) != comp.end())
            {
                return vector<int>{comp[diff], i};
            }
            comp[nums[i]] = i;
        }
        return vector<int>();
    }
};