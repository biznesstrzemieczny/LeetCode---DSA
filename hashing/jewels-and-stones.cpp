/*
Task: You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have. Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels. Letters are case sensitive, so "a" is considered a different type of stone from "A".
Time: O(n + m)
Space: O(n)
*/

#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        unordered_set<char> jewelsSet{jewels.begin(), jewels.end()};
        long ans = 0;

        for (char c : stones)
        {
            if (jewelsSet.contains(c))
            {
                ans++;
            }
        }

        return ans;
    }
};