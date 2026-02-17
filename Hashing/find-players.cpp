/*
Task: You are given an integer array matches where matches[i] = [winner_i, loser_i] indicates that the player winner_i defeated player loser_i in a match. Return a list answer of size 2 where: answer[0] is a list of all players that have not lost any matches. answer[1] is a list of all players that have lost exactly one match. The values in the two lists should be returned in increasing order. Note: You should only consider the players that have played at least one match. The testcases will be generated such that no two matches will have the same outcome.
Time: O(n log n)
Space: O(n)
*/

#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        vector<int> zeroLoss;
        vector<int> oneLoss;
        unordered_map<int, int> stats;
        for (int i = 0; i < matches.size(); i++)
        {
            int winner = matches[i][0];
            int loser = matches[i][1];

            stats[loser]++;
            if (!stats.contains(winner))
            {
                stats[winner] = 0;
            }
        }
        for (auto [player, losses] : stats)
        {
            if (losses == 0)
            {
                zeroLoss.push_back(player);
            }
            else if (losses == 1)
            {
                oneLoss.push_back(player);
            }
        }
        sort(zeroLoss.begin(), zeroLoss.end());
        sort(oneLoss.begin(), oneLoss.end());

        return {zeroLoss, oneLoss};
    }
};
