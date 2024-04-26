#include <map>

/**
 * Remove Nth Node From End Of List
 * Hash map approach
 * https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 *
 * Created: 2024-04-26
 * Updated: 2024-04-26
 * Author: Ditra Amadia
 *
 * O(n) time complexity
 * 0ms runtime
 */

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution
{
public:
  ListNode *removeNthFromEnd(ListNode *head, int n)
  {
    std::map<int, ListNode *> map;

    ListNode *it = head;
    int i = 0;
    while (it)
    {
      map[i] = it;

      it = it->next;
      i++;
    }

    ListNode *_temp = map[i - n];
    if (n != i)
    {
      map[i - n - 1]->next = _temp->next;
    }
    else
    {
      head = _temp->next;
    }

    delete map[i - n];

    return head;
  }
};