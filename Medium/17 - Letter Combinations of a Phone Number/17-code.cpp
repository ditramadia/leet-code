#include <vector>
#include <string>
#include <map>

/**
 * Letter Combination of a Phone Number
 * Bactracking approach
 * https://leetcode.com/problems/letter-combinations-of-a-phone-number/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 * Inspired by: NeetCode (https://www.youtube.com/watch?v=0snEunUacZY&ab_channel=NeetCode)
 *
 * O(n^n) time complexity
 * 4ms runtime
 */

class Solution
{
private:
  std::string digits = "";
  std::vector<std::string> res;
  std::map<char, std::string> map;

public:
  void backtrack(int i, std::string curStr)
  {
    if (curStr.length() == this->digits.length())
    {
      this->res.push_back(curStr);
      return;
    }

    for (char c : this->map[this->digits[i]])
    {
      backtrack(i + 1, curStr + c);
    }
  }

  std::vector<std::string> letterCombinations(std::string digits)
  {
    if (digits == "")
      return res;

    this->digits = digits;
    this->map['2'] = "abc";
    this->map['3'] = "def";
    this->map['4'] = "ghi";
    this->map['5'] = "jkl";
    this->map['6'] = "mno";
    this->map['7'] = "pqrs";
    this->map['8'] = "tuv";
    this->map['9'] = "wxyz";

    backtrack(0, "");
    return this->res;
  }
};