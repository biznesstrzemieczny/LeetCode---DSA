/*
Task: Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
Time: O(n log n)
Space: O(1)
*/

#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};