/**
 * Two Sum
 * Brute force approach
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n^2) time complexity
 * 49ms runtime
 */
#include <vector>
class Solution
{
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      for (int j = i + 1; j < nums.size(); j++)
      {
        if (nums[i] + nums[j] == target)
          return std::vector<int>({i, j});
      }
    }
    return std::vector<int>();
  }
};