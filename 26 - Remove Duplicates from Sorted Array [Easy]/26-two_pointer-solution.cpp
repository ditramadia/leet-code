#include <vector>

/**
 * Remove Duplicate from Sorted Array
 * Two pointer approach
 * https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 3ms runtime
 */

class Solution
{
public:
  int removeDuplicates(std::vector<int> &nums)
  {
    int p1 = 0;
    int p2 = 0;

    while (p2 < nums.size())
    {
      int n = nums[p2];

      if (p1 > 0 && n == nums.at(p1 - 1))
      {
        p2++;
        continue;
      }

      // replace nums[p1] with n
      nums.at(p1) = n;
      p1++;
      p2++;
    }

    return p1;
  }
};