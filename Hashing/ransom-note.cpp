/*
Task: Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise. Each letter in magazine can only be used once in ransomNote.
Time: O(n)
Space: O(1)
*/

#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        unordered_map<char, int> map;
        for (char c : magazine)
        {
            map[c]++;
        }

        for (char ch : ransomNote)
        {
            if (map.contains(ch) && map[ch] > 0)
            {
                map[ch]--;
            }
            else
            {
                return false;
            }
        }

        return true;
    }
};
