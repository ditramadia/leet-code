#include <string>
#include <bitset>
#include <algorithm>

/**
 * Add Binary
 * Brute force approach
 * https://leetcode.com/problems/add-binary/
 *
 * Created: 2024-04-03
 * Updated: 2024-04-03
 * Author: Ditra Amadia
 * Inspired by: hi-malik (https://leetcode.com/problems/add-binary/solutions/1679423/well-detailed-explaination-java-c-python-easy-for-mind-to-accept-it/)
 *
 * O(n) time complexity
 * 0ms runtime
 */

class Solution
{
public:
  std::string addBinary(std::string a, std::string b)
  {
    std::string res;
    int i = a.length() - 1;
    int j = b.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0)
    {
      int sum = carry;
      if (i >= 0)
        sum += a[i] - '0';
      if (j >= 0)
        sum += b[j] - '0';
      carry = sum > 1 ? 1 : 0;
      res += std::to_string(sum % 2);
      i--;
      j--;
    }

    if (carry)
      res += std::to_string(carry);
    reverse(res.begin(), res.end());
    return res;
  }
};