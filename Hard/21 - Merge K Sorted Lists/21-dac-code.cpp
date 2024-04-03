#include <cstddef>
#include <vector>

/**
 * Merge K Sorted Lists
 * Divide and Conquer approach
 * https://leetcode.c0om/problems/merge-k-sorted-lists/
 *
 * Created: 2024-04-03
 * Updated: 2024-04-03
 * Author: Ditra Amadia
 * Inspired by: EricXiao (https://leetcode.com/problems/merge-k-sorted-lists/solutions/10531/sharing-my-straightforward-c-solution-without-data-structure-other-than-vector/)
 *
 * O(n * log k) time complexity
 * 1ms runtime
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
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2)
  {
    if (l1 == NULL)
      return l2;
    if (l2 == NULL)
      return l1;

    if (l1->val < l2->val)
    {
      l1->next = mergeTwoLists(l1->next, l2);
      return l1;
    }
    else
    {
      l2->next = mergeTwoLists(l1, l2->next);
      return l2;
    }
  }

  ListNode *mergeKLists(std::vector<ListNode *> &lists)
  {
    if (lists.empty())
      return NULL;
    int len = lists.size();

    while (len > 1)
    {
      for (int i = 0; i < len / 2; i++)
      {
        lists[i] = mergeTwoLists(lists[i], lists[len - 1 - i]);
      }
      len = (len + 1) / 2;
    }

    return lists.front();
  }
};