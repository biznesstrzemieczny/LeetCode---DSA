/*
Task: Given an integer array arr, count how many elements x there are, such that x + 1 is also in arr. If there are duplicates in arr, count them separately.
Time: O(n^2)
Space: O(1)
*/

#include <vector>

using namespace std;

class Solution
{
public:
    int countElements(vector<int> &arr)
    {
        int ans = 0;
        for (int num : arr)
        {
            if (integerInArray(arr, num + 1))
            {
                ans++;
            }
        }
        return ans;
    }

    bool integerInArray(vector<int> &arr, int target)
    {
        for (int num : arr)
        {
            if (num == target)
            {
                return true;
            }
        }
        return false;
    }
};
