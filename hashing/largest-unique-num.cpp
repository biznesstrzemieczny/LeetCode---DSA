/*
Task: Given an integer array nums, return the largest integer that only occurs once. If no integer occurs once, return -1.
Time: O(n)
Space: O(n)
*/

#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    int largestUniqueNumber(vector<int> &nums)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        int ans = -1;

        for (auto [id, quantity] : map)
        {
            if (quantity == 1 && id > ans)
            {
                ans = id;
            }
        }
        return ans;
    }
};