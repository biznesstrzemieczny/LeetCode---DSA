/*
Task: Given an array of integers nums, you start with an initial positive value startValue. In each iteration, you calculate the step by step sum of startValue plus elements in nums (from left to right). Return the minimum positive value of startValue such that the step by step sum is never less than 1.
Time: O(n)
Space: O(n)
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int minStartValue(vector<int> &nums)
    {
        vector<int> prefix = {nums[0]};
        int minPrefix = min(0, nums[0]);
        for (int i = 1; i < nums.size(); i++)
        {
            prefix.push_back(prefix.back() + nums[i]);
            if (prefix[i] < minPrefix)
            {
                minPrefix = prefix[i];
            }
        }
        int ans = abs(minPrefix) + 1;
        return ans;
    }
};