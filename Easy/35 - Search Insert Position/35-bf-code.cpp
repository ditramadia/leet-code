#include <vector>

/**
 * Search Insert Position
 * Brute force approach
 * https://leetcode.com/problems/search-insert-position/
 *
 * Created: 2024-03-24
 * Updated: 2024-03-24
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int searchInsert(std::vector<int> &nums, int target)
  {
    for (int i = 0; i < nums.size(); i++)
    {
      if (nums[i] >= target)
        return i;
    }
    return nums.size();
  }
};