#include <vector>

/**
 * Plus One
 * Brute force approach
 * https://leetcode.com/problems/plus-one/
 *
 * Created: 2024-03-27
 * Updated: 2024-03-27
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  std::vector<int> plusOne(std::vector<int> &digits)
  {
    int c = 1;
    std::vector<int> ret;

    for (int i = digits.size() - 1; i >= 0; i--)
    {
      int sum = digits[i] + c;
      c = sum / 10;
      ret.insert(ret.begin(), sum % 10);
    }

    if (c > 0)
      ret.insert(ret.begin(), c);

    return ret;
  }
};