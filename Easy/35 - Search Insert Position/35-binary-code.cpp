#include <vector>

/**
 * Search Insert Position
 * Binary approach
 * https://leetcode.com/problems/search-insert-position/
 *
 * Created: 2024-03-24
 * Updated: 2024-03-24
 * Author: Ditra Amadia
 *
 * O(log n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int searchInsert(std::vector<int> &nums, int target)
  {
    int p1 = 0;
    int p2 = nums.size() - 1;

    if (nums[p1] > target)
    {
      return 0;
    }

    if (nums[p2] < target)
    {
      return nums.size();
    }

    while (true)
    {
      if (nums[p1] == target)
        return p1;
      if (nums[p2] == target)
        return p2;
      if (p1 + 1 == p2)
        return p2;

      // shift p1
      if (nums[p1] < target && nums[p1 + 1] <= target)
      {
        p1++;
      }

      // shift p2
      if (nums[p2] > target && nums[p2 - 1] >= target)
      {
        p2--;
      }
    }
    return 0;
  }
};