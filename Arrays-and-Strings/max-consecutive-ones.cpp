/*
Task: Given a binary array nums and an integer k, return the maximum number of consecutive 1's in the array if you can flip at most k 0's.
Time: O(n)
Space: O(1)
*/

#include <vector>

using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int ans = 0, left = 0, flipped = 0;

        for (int right = 0; right < nums.size(); right++)
        {
            if (nums[right] == 0)
            {
                flipped++;
            }
            while (flipped > k)
            {
                if (nums[left] == 0)
                {
                    flipped--;
                }
                left++;
            }
            int temp = right - left + 1;
            if (ans < temp)
            {
                ans = temp;
            }
        }

        return ans;
    }
};