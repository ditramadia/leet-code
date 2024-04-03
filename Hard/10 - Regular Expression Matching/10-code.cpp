#include <iostream>
#include <string>

bool isMatchRec(std::string s, std::string p, int i, int j)
{
  if (i >= s.length() && j >= p.length())
    return true;
  if (j >= p.length())
    return false;

  // if current character is a match
  bool match = i < s.length() && (s[i] == p[j] || p[j] == '.');

  // if current pattern has a star
  if (j + 1 < p.length() && p[j + 1] == '*')
  {
    return (match && isMatchRec(s, p, i + 1, j)) || isMatchRec(s, p, i, j + 2);
  }

  if (match)
    return isMatchRec(s, p, i + 1, j + 1);

  return false;
}

bool isMatch(std::string s, std::string p)
{
  return isMatchRec(s, p, 0, 0);
}

int main()
{
  std::cout << isMatch("aa", "a") << std::endl;                                   // 0
  std::cout << isMatch("aa", "a*") << std::endl;                                  // 1
  std::cout << isMatch("ab", ".*") << std::endl;                                  // 1
  std::cout << isMatch("c", "cd*") << std::endl;                                  // 1
  std::cout << isMatch("aabc", "a*b*cd*") << std::endl;                           // 1
  std::cout << isMatch("acbaccaaaacaababba", "b*c*b*c*c*b*c*..*bc") << std::endl; // 0

  return 0;
}