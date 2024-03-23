#include <vector>
#include <map>

/**
 * Two Sum
 * Hash map approach
 * https://leetcode.com/problems/two-sum/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 13ms runtime
 */

class Solution
{
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target)
  {
    std::map<int, int> map;

    for (int i = 0; i < nums.size(); i++)
    {
      int d = target - nums[i];

      if (map.find(d) != map.end())
      {
        return std::vector<int>({map[d], i});
      }

      map[nums[i]] = i;
    }

    return std::vector<int>();
  }
};