#include <string>

/**
 * Integer to Roman
 * Brute force approach
 * https://leetcode.com/problems/integer-to-roman/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(1) time complexity
 * 3ms runtime
 */

class Solution
{
public:
  std::string intToRoman(int num)
  {
    std::string unit[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    std::string tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    std::string hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    std::string thousands[] = {"", "M", "MM", "MMM"};

    return thousands[num / 1000] + hundreds[(num % 1000) / 100] + tens[(num % 100) / 10] + unit[num % 10];
  }
};