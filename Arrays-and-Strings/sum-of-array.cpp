/*
Task: Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]...nums[i]). Return the running sum of nums.
Time: O(n)
Space: O(n)
*/

#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> prefix = {nums[0]};
        for (int i = 1; i < nums.size(); i++)
        {
            prefix.push_back(prefix.back() + nums[i]);
        }
        return prefix;
    }
};