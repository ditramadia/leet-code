#include <string>
#include <stack>
#include <unordered_map>

/**
 * Valid Parentheses
 * Hash map approach
 * https://leetcode.com/problems/valid-parentheses/
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
  bool isValid(std::string s)
  {
    if (s.length() % 2 != 0)
    {
      return false;
    }

    std::unordered_map<char, char> m;
    m[')'] = '(';
    m[']'] = '[';
    m['}'] = '{';

    std::stack<char> stack;

    for (char c : s)
    {
      if (c == '(' || c == '[' || c == '{')
      {
        stack.push(c);
        continue;
      }

      if (stack.empty())
        return false;

      char ct = m[c];
      if (stack.top() == ct)
      {
        stack.pop();
        continue;
      }

      return false;
    }

    return (stack.empty() ? true : false);
  }
};