/*
Task: You are given a 0-indexed array nums of n integers, and an integer k. The k-radius average for a subarray of nums centered at some index i with the radius k is the average of all elements in nums between the indices i - k and i + k (inclusive). If there are less than k elements before or after the index i, then the k-radius average is -1. Build and return an array avgs of length n where avgs[i] is the k-radius average for the subarray centered at index i.
Time: O(n)
Space: O(n)
*/

#include <vector>

using namespace std;

class Solution
{
public:
    vector<int> getAverages(vector<int> &nums, int k)
    {
        vector<int> avgs(nums.size(), -1);
        int radius = 2 * k + 1;
        long curr_sum = 0;

        if (radius > nums.size())
        {
            return avgs;
        }

        for (int i = 0; i < radius; i++)
        {
            curr_sum += nums[i];
        }
        avgs[k] = curr_sum / radius;

        for (int i = k + 1; i < nums.size() - k; i++)
        {
            curr_sum += nums[i + k] - nums[i - k - 1];
            avgs[i] = curr_sum / radius;
        }

        return avgs;
    }
};