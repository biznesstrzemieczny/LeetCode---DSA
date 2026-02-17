/*
Task: A pangram is a sentence where every letter of the English alphabet appears at least once. Given a string sentence containing only lowercase English letters, return true if sentence is a pangram, or false otherwise.
Time: O(n)
Space: O(1)
*/

#include <string>
#include <unordered_set>

using namespace std;

class Solution
{
public:
    bool checkIfPangram(string sentence)
    {
        int num_of_alphabet_chars = 26;
        unordered_set<char> alphabet_chars;
        for (char c : sentence)
        {
            alphabet_chars.insert(c);
            if (alphabet_chars.size() == num_of_alphabet_chars)
            {
                return true;
            }
        }
        return false;
    }
};
