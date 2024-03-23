#include <string>
#include <stack>

/**
 * Roman to Integer
 * Hash map approach
 * https://leetcode.com/problems/valid-parentheses/
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
  bool isValid(std::string s)
  {
    std::stack<char> stack;

    for (int i = 0; i < s.length(); i++)
    {
      char c = s[i];

      if (c == '(' || c == '[' || c == '{')
      {
        stack.push(c);
        continue;
      }

      if (stack.empty())
        return false;

      if (c == ')' && stack.top() == '(' || c == ']' && stack.top() == '[' || c == '}' && stack.top() == '{')
      {
        stack.pop();
        continue;
      }

      return false;
    }

    return (stack.empty() ? true : false);
  }
};