#include <string>
#include <map>

/**
 * Roman to Integer
 * Hash map approach
 * https://leetcode.com/problems/two-sum/
 *
 * Created: 2024-03-23
 * Updated: 2024-03-23
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 15ms runtime
 */

class Solution
{
public:
  int romanToInt(std::string s)
  {
    // Create a map
    std::map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;

    // Sum all the mapped digit
    int sum = 0;
    for (int i = 0; i < s.size(); i++)
    {
      int cv = m[s[i]];
      if (i + 1 < s.size() && cv < m[s[i + 1]])
      {
        sum -= cv;
        continue;
      }
      sum += cv;
    }
    return sum;
  }
};