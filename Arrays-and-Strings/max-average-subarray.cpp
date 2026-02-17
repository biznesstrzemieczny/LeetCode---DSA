/*
Task: You are given an integer array nums consisting of n elements, and an integer k.
Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10^-5 will be accepted.
Time: O(n)
Space: O(1)
*/

#include <vector>

using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        double ans, curr = 0;
        for (int i = 0; i < k; i++)
        {
            curr += nums[i];
        }
        ans = curr / k;

        for (int i = k; i < nums.size(); i++)
        {
            curr += nums[i] - nums[i - k];
            if (ans < (curr / k))
            {
                ans = curr / k;
            }
        }
        return ans;
    }
};