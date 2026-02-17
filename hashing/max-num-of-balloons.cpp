/*
Task: Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible. You can use each character in text at most once. Return the maximum number of instances that can be formed.
Time: O(n)
Space: O(1)
*/

#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> letters;
        for (char c : text)
        {
            letters[c]++;
        }
        int b = letters['b'];
        int a = letters['a'];
        int l = letters['l'] / 2;
        int o = letters['o'] / 2;
        int n = letters['n'];

        int ans = min({b, a, l, o, n});

        return ans;
    }
};