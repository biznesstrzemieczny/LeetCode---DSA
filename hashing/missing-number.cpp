/*
Task: Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
Time: O(n)
Space: O(n)
*/

#include <vector>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        unordered_set<int> mySet{nums.begin(), nums.end()};
        for (int i = 0; i < nums.size() + 1; i++)
        {
            if (!mySet.contains(i))
            {
                return i;
            }
        }
        return 0;
    }
};