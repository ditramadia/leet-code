#include <vector>

/**
 * Remove Element
 * Two pointer approach
 * https://leetcode.com/problems/remove-element/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  int removeElement(std::vector<int> &nums, int val)
  {

    int p1 = 0;
    for (int p2 = 0; p2 < nums.size(); p2++)
    {
      int c = nums[p2];

      // shift element
      if (c != val)
      {
        nums[p1] = c;
        p1++;
      }
    }

    return p1;
  }
};