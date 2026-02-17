/*
Task: Given a string s, find the length of the longest substring without duplicate characters.
Time: O(n)
Space: O(n)
*/

#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int ans = 0;
        int left = 0;
        unordered_set<char> used;

        for (int right = 0; right < s.size(); right++)
        {
            while (used.contains(s[right]))
            {
                used.erase(s[left]);
                left++;
            }

            used.insert(s[right]);
            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};
