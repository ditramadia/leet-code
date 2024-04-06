/**
 * Remove Duplicates from Sorted List
 * Brute force
 * https://leetcode.com/problems/remove-duplicates-from-sorted-list/
 *
 * Created: 2024-04-07
 * Updated: 2024-04-07
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
  ListNode *deleteDuplicates(ListNode *head)
  {
    if (head == nullptr)
      return nullptr;

    ListNode *ret = new ListNode(head->val);
    ListNode *i = ret;
    head = head->next;

    while (head != nullptr)
    {
      if (head->val != i->val)
      {
        i->next = new ListNode(head->val);
        i = i->next;
      }
      head = head->next;
    }

    return ret;
  }
};