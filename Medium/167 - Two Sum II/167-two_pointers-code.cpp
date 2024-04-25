#include <vector>

/**
 * Two Sum II (Input Array is Sorted)
 * Two pointers approach
 * https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
 *
 * Created: 2024-04-25
 * Updated: 2024-04-25
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 3ms runtime
 */

class Solution
{
public:
  std::vector<int> twoSum(std::vector<int> &numbers, int target)
  {
    std::vector<int> retval;

    int i = 0;
    int j = numbers.size() - 1;

    while (i < j)
    {
      if (numbers[i] + numbers[j] == target)
      {
        retval.push_back(i + 1);
        retval.push_back(j + 1);
        return retval;
      }

      if (numbers[i] + numbers[j] > target)
      {
        j--;
        continue;
      }

      if (numbers[i] + numbers[j] < target)
      {
        i++;
        continue;
      }
    }

    return retval;
  }
};